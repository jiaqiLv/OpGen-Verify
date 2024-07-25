import os 
import tvm
import numpy as np
import tvm.testing as testing
from tvm import te
from tvm import topi
from tvm.runtime import load_module
import torch
from os.path import join,exists
import json
import copy
import re
import logging

logging.basicConfig(
    filename='output_exec_by_tvm_with_name.log',  # 输出到文件
    filemode='w',
    level=logging.INFO,  # 设置日志级别
    format='%(asctime)s %(levelname)s: %(message)s',  # 设置日志格式
    datefmt='%Y-%m-%d %H:%M:%S'  # 设置日期格式
)

def str_parse(str):
    print(str.strip('[]').split(', '))
    shape = [[int(y) for y in x.strip('[]').split(', ')] for x in str.strip('[]').split(', ')]
    return shape

def get_content_between_parentheses(text):
    pattern = r'\(([^)]+)\)'
    match = re.search(pattern, text)
    if match:
        pattern_for_param = r"float\*\s*(\w+)"
        matches = re.findall(pattern_for_param,match.group(1))
        return matches
    else:
        return None

def extract_param_dict(op):
    np.random.seed(42)
    param_dict = {}
    for i,name in enumerate(op["input_name"]):
        param_dict[name] = np.random.random(tuple(op["input_shape"][i])).astype("float32")
        # param_dict[name] = op["input_shape"][i]
    for i,name in enumerate(op["output_name"]):
        param_dict[name] = np.zeros(tuple(op["output_shape"][i])).astype("float32")
        # param_dict[name] = op["output_shape"][i]
    return param_dict

def exec_by_tvm(host_module, op, c_code):
    np.random.seed(42)
    # _host_module = copy.deepcopy(host_module)
    host_module.imported_modules[0].set_source(c_code)
    dev = tvm.device(target.kind.name, 0)
    input_list = []
    output_list = []
    for _input_shape in op['input_shape']:
        input_list.append(np.random.random(tuple(_input_shape)).astype("float32"))
    for _output_shape in op['output_shape']:
        output_list.append(np.zeros(tuple(_output_shape)).astype("float32"))
    input_tvm_list = []
    output_tvm_list = []
    for _input in input_list:
        input_tvm_list.append(tvm.nd.array(_input,dev))
    for _output in output_list:
        output_tvm_list.append(tvm.nd.array(_output,dev))
    param_list = []
    param_list.extend(input_tvm_list)
    param_list.extend(output_tvm_list)
    logging.info('param_list: %s', param_list)
    host_module(*param_list)
    logging.info('param_list(exe): %s', param_list)
    return output_tvm_list

def exec_by_tvm_with_name(host_module, op, c_code):
    host_module.imported_modules[0].set_source(c_code)
    dev = tvm.device(target.kind.name, 0)
    param_dict = extract_param_dict(op)
    # print('param_dict:', param_dict)
    for key in param_dict:
        param_dict[key] = tvm.nd.array(param_dict[key],dev)
    code_param_name_list = get_content_between_parentheses(op['c_code'])
    param_list = []
    # print('code_param_name_list:', code_param_name_list)
    for name in code_param_name_list:
        param_list.append(param_dict[name])
    # print('param_list:', param_list)
    logging.info('param_list: %s', param_list)
    host_module(*param_list)
    logging.info('param_list(exe): %s', param_list)
    # print('param_list(exe):', param_list)
    return param_list

if __name__ == '__main__':
    target = tvm.target.Target(target="c", host="llvm")
    save_path = '/code/OpGen-Verify/code_verification/single_op/Elementwise'
    if not os.path.exists(save_path):
        raise Exception(f"{save_path} not found")
    
    with open(join(save_path,'Elementwise_deepseek.json'),'r') as file:
        op_list = json.load(file)

    op_exec_pass = 0

    for round, op in enumerate(op_list):
        file_name = '{}_{}_{}'.format(op['op_name'],op['op_args'],op['input_shape'])
        print(file_name)
        host_module = load_module(join(save_path,'host_module',file_name),'ll')
        print(join(save_path,'device_module',file_name))
        device_module = load_module(join(save_path,'device_module',file_name),'c')
        host_module.import_module(device_module)

        # the c_code need to by verification
        c_code = op['c_code']
        c_code_deepseek = op['deepseek_c']

        # FIXME: 如何确定是编译出现问题还是执行出现问题
        # output_tvm_list = exec_by_tvm_with_name(host_module, op, c_code)
        # output_tvm_list_deepssek = exec_by_tvm_with_name(host_module, op, c_code_deepseek)

        output_tvm_list = exec_by_tvm(host_module, op, c_code)
        output_tvm_list_deepssek = exec_by_tvm(host_module, op, c_code_deepseek)
        
        try:
            assert len(output_tvm_list) == len(output_tvm_list_deepssek)
            for i in range(len(output_tvm_list)):
                testing.assert_allclose(output_tvm_list[i].numpy(), output_tvm_list_deepssek[i].numpy())
        except Exception as e:
            print(f"第 {round+1} 轮执行出现异常: {e}")
            continue
        op_exec_pass += 1
    
    print('Total Num: {}'.format(len(op_list)))
    print('Total Pass Num: {}'.format(op_exec_pass))
    print('Total Pass Rate: {}'.format(op_exec_pass/len(op_list)))