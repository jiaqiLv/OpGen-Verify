import signal
from utils_complex import (CodeGen,
                   ArgsGen,
                   )
from utils import (
    write_ops_to_json,
    write_ops_to_file,
    handle_timeout
)
from args import args
# from op_graph import OpGraph,topology_expansion
from OpGraph import OpGraph,topology_expansion
from OpNode import op_info_list
import random
from tvm import (
    te,
    auto_scheduler,
    topi
)

def generate_single_code(ops,max_attempts=1):
    print('ops.__name__:', ops.__name__)
    code_gen = CodeGen(search_time=10,log_file_path='./generate/log',verbose_key=False)
    args_gen = ArgsGen(param_list=['N','C','H','W','CO','CI','KH','KW','strides','padding'])
    attempts = 0
    while attempts < max_attempts:
        args_gen.randomize_params()
        """For general args"""
        # op_args = args_gen.get_param_values()
        # print(*op_args)
        """Topology Args"""
        op_list = []
        for i in range(args.op_num):
            select_op = random.sample(op_info_list,1)
            if select_op[0]['op_name'] == 'ph':
                continue
            else:
                op_list.append(select_op[0]['op_name'])
        print('op_list:', op_list)
        op_args = [op_list]
        print(*op_args)
        signal.signal(signal.SIGALRM, handle_timeout)
        try:
            signal.alarm(args.timeout)
            # c_code, ir_code = code_gen.c_codegen_without_tune(topi_ops=ops, op_args=op_args)
            c_code, ir_code, host_module, device_module = code_gen.c_codegen(topi_ops=ops, op_args=op_args)
            cuda_code = code_gen.cuda_codegen(topi_ops=ops, op_args=op_args)
            op_name = ops.__name__
            write_ops_to_json(op_name, c_code, cuda_code, ir_code,op_args)
            write_ops_to_file(op_name, c_code, cuda_code, ir_code, host_module, device_module, op_args)
            attempts += 1
        except TimeoutError:
            pass
        finally:
            signal.alarm(0)

if __name__ == '__main__':
    generate_single_code(topology_expansion)