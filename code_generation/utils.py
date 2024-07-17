import json
from os.path import join,exists
import pandas as pd
from OpGraph import input_shape_list,output_shape_list
import os

def write_ops_to_json(op_name, c_code, cuda_code, ir_code, op_args, save_file_path = './generate/generation.json'):
    op_data = {
        'op_name': op_name,
        'c_code': c_code,
        'cuda_code': cuda_code,
        'ir_code': ir_code,
        'op_args':op_args,
        'input_shape':str(input_shape_list),
        'output_shape':str(output_shape_list)
    }
    with open(save_file_path, 'a') as file:
        json.dump(op_data,file)

def write_ops_to_file(op_name, c_code, cuda_code, ir_code, host_module, device_module, op_args, save_file_path='generate'):
    os.makedirs(join(save_file_path,'c'),exist_ok=True)
    os.makedirs(join(save_file_path,'ir'),exist_ok=True)
    os.makedirs(join(save_file_path,'cuda'),exist_ok=True)
    os.makedirs(join(save_file_path,'host_module'),exist_ok=True)
    os.makedirs(join(save_file_path,'device_module'),exist_ok=True)

    with open(join(save_file_path,'c',f'{op_name}_{op_args}_{input_shape_list}.c'),'w') as file:
        file.write(c_code)

    with open(join(save_file_path,'ir',f'{op_name}_{op_args}_{input_shape_list}.ir'),'w') as file:
        file.write(ir_code)

    with open(join(save_file_path,'cuda',f'{op_name}_{op_args}_{input_shape_list}.cu'),'w') as file:
        file.write(cuda_code)
    
    host_module.save(os.path.join(save_file_path, 'host_module',f'{op_name}_{op_args}_{str(input_shape_list)}'), "ll")
    device_module.save(os.path.join(save_file_path, 'device_module',f'{op_name}_{op_args}_{str(input_shape_list)}'), "c")

def handle_timeout(signum, frame):
    raise TimeoutError("Execution timed out")

def load_ops_from_txt(file_path):
    ops_dict = {
        'op':[],
        'description':[]
    }
    with open(file_path,'r') as f:
        for index,line in enumerate(f):
            if index % 2 == 0 and index % 4 != 0:
                ops_dict['description'].append(line.strip())
            if index % 4 == 0:
                ops_dict['op'].append(line.strip())
    ops_df = pd.DataFrame(ops_dict)
    ops_df.to_csv('/code/OpGen-Verify/code_generation/ops/topi_ops.csv',index=False)

def parse_func(func_str):
    necessary_params = []
    optional_params = []
    assert len(func_str.split('(')) == 2
    func_name = func_str.split('(')[0]
    params_list = func_str.split('(')[-1][:-1]

    if '[' in params_list and ']' in params_list:
        optional_params_str = params_list.split('[')[-1][:-1]
        optional_params = optional_params_str.split(',')
        optional_params = [s.strip() for s in optional_params if s.strip() and '.' not in s]
    else:
        optional_params = []

    if '[' in params_list and ']' in params_list:
        necessary_params_str = params_list.split('[')[0]
    else:
        necessary_params_str = params_list
    necessary_params = necessary_params_str.split(',')
    necessary_params = [s.strip() for s in necessary_params if s.strip() and '.' not in s]
    print(func_name,':',params_list,'|',necessary_params,'|',optional_params)
    return func_name,necessary_params,optional_params

if __name__ == '__main__':
    ops_df = pd.read_csv('/code/OpGen-Verify/code_generation/ops/topi_ops.csv')
    op_list = []
    func_list = ops_df['op']
    func_description = ops_df['description']
    for func,description in zip(func_list,func_description):
        func_name,necessary_params,optional_params = parse_func(func)
        op_list.append({
            'op_name':func_name,
            'necessary_params':necessary_params,
            'optional_params':optional_params,
            'description':description
        })
    with open('/code/OpGen-Verify/code_generation/ops/topi_ops.json','w') as f:
        json.dump(op_list,f,indent=4)
