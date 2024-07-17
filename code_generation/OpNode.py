import tvm
from tvm import topi,te
import json
import copy

file_path = '/code/OpGen-Verify/code_generation/ops/op_info.json'
with open(file_path,'r') as file:
    op_info_list = json.load(file)

class OpNode:
    def __init__(self,op_name,node_id=None) -> None:
        self.op_name = op_name
        self.node_id = f'{op_name}_{node_id}'
        self.extra_params = []
        self.input_tensors = []
        self.output_tensors = []
        self.variable_dict = {}
        """Load info from json file"""
        self.load_info_from_json(op_info_list=op_info_list)
        """Init func call"""
        if op_name != 'ph':
            self.func_call = getattr(eval(self.func_call_str),self.op_name)
        else:
            self.func_call = None

    def get_next_input_shape(self):
        for tensor in self.input_tensors:
            if 'value' in tensor:
                pass
            else:
                return tensor['shape']
        print('All the input tensors have the real data.')
        return []
    
    def load_info_from_json(self,op_info_list):
        # print('op_info_list:', op_info_list)
        """Select op_info by name"""
        for _ in op_info_list:
            if _['op_name'] == self.op_name:
                op_info = copy.deepcopy(_)
        if op_info is None:
            raise ValueError(f'{self.op_name} is not found!')
        # print('op_info:', op_info)
        """Extract op info"""
        # input
        for key in op_info['input']:
            _input_info = op_info['input'][key]
            if _input_info['type'] == 'tensor':
                _input_info['dim'] = len(_input_info['shape'])
                self.input_tensors.append(_input_info)
            else:
                self.extra_params.append(_input_info)
        # output
        for key in op_info['output']:
            _output_info = op_info['output'][key]
            if _output_info['type'] == 'tensor':
                _output_info['dim'] = len(_output_info['shape'])
                self.output_tensors.append(_output_info)
            else:
                raise ValueError('Output type must be tensor!')
        self.func_call_str = op_info['func_call']

    def verify_input_tensor(self,verified_tensor_list,input_tensor):
        if not verified_tensor_list:
            return True
        """1. Both input tensors should have the same shape
            [   
                {'type': 'tensor', 
                'shape': ['I_1', 'I_2', 'I_3', 'I_4'], 
                'is_fixed': False, 'dim': 4}, 
                {'type': 'tensor', 
                'shape': ['I_1', 'I_2', 'I_3', 'I_4'], 
                'is_fixed': False, 'dim': 4}
            ]
        """
        # All variables should match the shape info written into the variable_dict
        for idx,_tensor in enumerate(self.input_tensors):
            if 'value' in _tensor:
                for idx,_shape in enumerate(_tensor['shape']):
                    if _shape not in self.variable_dict:
                        self.variable_dict[_shape] = _tensor['value'].shape[idx]
                    else:
                        assert self.variable_dict[_shape] == _tensor['value'].shape[idx]
            else:
                for idx,_shape in enumerate(_tensor['shape']):
                    if _shape not in self.variable_dict:
                        pass
                    else:
                        if self.variable_dict[_shape] != input_tensor.shape[idx]:
                            return False
        return True
    
    def verify_output_tensor(self,output_tensor):
        if len(output_tensor.shape) == self.output_tensors[0]['dim']:
            return True
        else:
            return False

    def extarct_expect_shape(self):
        expected_shape = []
        for idx,_tensor in enumerate(self.input_tensors):
            if 'value' in _tensor:
                pass
            else:
                for _shape in _tensor['shape']:
                    if _shape not in self.variable_dict:
                        expected_shape.append(-1)
                    else:
                        expected_shape.append(self.variable_dict[_shape])
        return expected_shape

    def reload_tensor_dim(self, tensor, tensor_type='input'):
        if tensor_type == 'input':
            for idx,_tensor in enumerate(self.input_tensors):
                if 'value' in _tensor:
                    pass
                else:
                    if _tensor['is_fixed'] == False:
                        self.input_tensors[idx]['dim'] = len(tensor.shape)
                        self.input_tensors[idx]['shape'] = self.input_tensors[idx]['shape'][:self.input_tensors[idx]['dim']]
                    else:
                        if self.input_tensors[idx]['dim'] != len(tensor.shape):
                            raise ValueError('Input tensor have illegal shape {}, expected {}'.format(tensor.shape,self.input_tensors[idx]['shape']))
        elif tensor_type == 'output':
            for idx,_tensor in enumerate(self.output_tensors):
                if 'value' in _tensor:
                    pass
                else:
                    if _tensor['is_fixed'] == False:
                        self.output_tensors[idx]['dim'] = len(tensor.shape)
                        self.output_tensors[idx]['shape'] = self.output_tensors[idx]['shape'][:self.output_tensors[idx]['dim']]
                    else:
                        if self.output_tensors[idx]['dim'] != len(tensor.shape):
                            raise ValueError('Input tensor have illegal shape {}, expected {}'.format(tensor.shape,self.output_tensors[idx]['shape']))
        else:
            raise ValueError(f'Expected tensor type is `input` or `output`, but get {tensor_type} ')
    
    def set_input(self,input_tensor):
        self.reload_tensor_dim(input_tensor,tensor_type='input')
        verified_tensor_list = [] # the validated input tensors
        for idx,_tensor in enumerate(self.input_tensors):
            if 'value' in _tensor:
                pass
                verified_tensor_list.append(_tensor)
            else:
                is_legal = self.verify_input_tensor(verified_tensor_list,input_tensor)
                if is_legal:
                    self.input_tensors[idx]['value'] = input_tensor
                    break
                else:
                    # TODO: create a new ph when occurs too many failures
                    print(f'Input tensor have illegal shape {input_tensor.shape}, expected {self.extarct_expect_shape()}')
                    return False
                    # raise ValueError(f'Input tensor have illegal shape {input_tensor.shape}, expected {self.extarct_expect_shape()}')
        return True
    
    def set_output(self,output_tensor):
        self.reload_tensor_dim(output_tensor,tensor_type='output')
        if len(self.output_tensors) != 1:
            raise ValueError(f'Excepted output tensor length is 1 but get {len(self.output_tensors)}')
        is_legal = self.verify_output_tensor(output_tensor)
        if is_legal:
            self.output_tensors[0]['value'] = output_tensor

    def is_input_ready(self):
        for _tensor in self.input_tensors:
            if 'value' in _tensor:
                continue
            else:
                return False
        return True

    def __str__(self) -> str:
        return f'{self.node_id}-{self.input_tensors}-{self.output_tensors}'
    

if __name__ == '__main__':
    node = OpNode('cos')
    Ltensor = te.placeholder((12,14,16),name='Ltensor',dtype='float32')
    # Rtensor = te.placeholder((12,16,23),name='Rtensor',dtype='float32')
    node.set_input(Ltensor)
    # node.set_input(Rtensor)
    out = topi.cos(Ltensor)
    node.set_output(out)
    print(node)
    print(node.input_tensors,node.output_tensors)
    print(node.extra_params)
    print(node.func_call.__name__)