import os
import subprocess
from os.path import join,exists
import tvm
import re
import numpy as np
from tvm import te,topi


SOURCE_DIR = '/root/jiaqiLv/OpGen-Verify/code_generation/generate/c'
TARGET_DIR = './ll'
INCLUDE_DIRS = ['-I', '/root/codegen_tvm/tvm/include/', '-I', '/root/codegen_tvm/tvm/3rdparty/dlpack/include/']

def parse_filename(filename):
    match = re.match(r'(\w+)\[(.*)\]', filename)
    if match:
        function_name = (match.group(1))[:-1]
        parameters_str = match.group(2)
        parameters_str_list = re.findall(r'\d+', parameters_str)
        parameters = tuple([int(num) for num in parameters_str_list])
    else:
        raise ValueError('Match failure!')
    return function_name,parameters

def generate_ll():
    os.makedirs(TARGET_DIR,exist_ok=True)
    success_count = 0
    fail_count = 0
    fail_files = []
    for filename in os.listdir(SOURCE_DIR):
        if filename.endswith('.c'):
            # 构建源文件和目标文件的完整路径
            source_file = os.path.join(SOURCE_DIR, filename)
            target_file = os.path.join(TARGET_DIR, os.path.splitext(filename)[0] + '.ll')
            
            # 构建clang命令
            command = ['clang', '-S', '-emit-llvm', source_file, '-o', target_file] + INCLUDE_DIRS
            
            # 执行命令
            try:
                subprocess.run(command, check=True)
                print(f"build {filename} success, file path: {target_file}")
                success_count += 1
            except subprocess.CalledProcessError as e:
                print(f"build {filename} faild:{e}")
                fail_count += 1
                fail_files.append(filename)
    print(f"successful: {success_count} files")
    print(f"fail:       {fail_count} files")
    if fail_count > 0:
        print("Files that failed to compile:")
        for file in fail_files:
            print(file)

def execute_ll():

    def execute_by_runtime_module(runtime_module,input_data,op_name):
        shape = input_data.shape
        # 创建TVM的context，这里使用CPU
        ctx = tvm.cpu(0)
        # 创建TVM NDArray
        a = tvm.nd.array(input_data, ctx)
        # 创建输出存储空间
        b = tvm.nd.array(np.zeros(shape, dtype=input_data.dtype), ctx)

        if op_name == 'max' or op_name == 'adaptive_pool_avg':
            pass
        elif op_name == 'add':
            b = tvm.nd.array(input_data, ctx)
            c = tvm.nd.array(np.zeros(shape, dtype=input_data.dtype), ctx)
            runtime_module(a,b,c)
            return c.asnumpy()
        else:
            runtime_module(a,b)
            return b.asnumpy()
    
    def execute_by_tvm(input_data,op_name):
        shape = input_data.shape
        A = te.placeholder(shape, dtype="float32", name="A")
        if op_name == "acos":
            B = te.compute(A.shape, lambda *i: te.acos(A(*i)), name="B")
        elif op_name == "asin":
            B = te.compute(A.shape, lambda *i: te.asin(A(*i)), name="B")
        elif op_name == "asinh":
            B = te.compute(A.shape, lambda *i: te.asinh(A(*i)), name="B")
        elif op_name == "atan":
            B = te.compute(A.shape, lambda *i: te.atan(A(*i)), name="B")
        elif op_name == "atanh":
            B = te.compute(A.shape, lambda *i: te.atanh(A(*i)), name="B")
        elif op_name == "ceil":
            B = te.compute(A.shape, lambda *i: te.ceil(A(*i)), name="B")
        elif op_name == "erf":
            B = te.compute(A.shape, lambda *i: te.erf(A(*i)), name="B")
        elif op_name == "exp":
            B = te.compute(A.shape, lambda *i: te.exp(A(*i)), name="B")
        elif op_name == "fast_erf":
            B = topi.fast_erf(A)
        elif op_name == "fast_exp":
            B = topi.fast_exp(A)
        elif op_name == "flip":
            B = topi.flip(A)
        elif op_name == "floor":
            B = topi.floor(A)
        elif op_name == "log2":
            B = topi.log2(A)
        elif op_name == "log10":
            B = topi.log10(A)
        elif op_name == "negative":
            B = topi.negative(A)
        elif op_name == "round":
            B = topi.round(A)
        elif op_name == "log":
            B = topi.log(A)
        elif op_name == "sin":
            B = topi.sin(A)
        elif op_name == "tan":
            B = topi.tan(A)
        elif op_name == "tanh":
            B = topi.tanh(A)
        elif op_name == "rsqrt":
            B = topi.rsqrt(A)
        elif op_name == "sqrt":
            B = topi.sqrt(A)
        elif op_name == "sigmoid":
            B = topi.sigmoid(A)
        elif op_name == "sign":
            B = topi.sign(A)
        elif op_name == "sinh":
            B = topi.sinh(A)
        elif op_name == "fast_tanh":
            B = topi.fast_tanh(A)
        elif op_name == "shape":
            B = topi.shape(A)
        # elif op_name == "shape":
        #     B = topi.shape(A)
        elif op_name == "sum":
            B = topi.sum(A)
        elif op_name == "max":
            B = topi.max(A,axis=1)
        elif op_name == "adaptive_pool_avg":
            B = topi.nn.adaptive_pool(A,output_size=(8,8),pool_type='avg')
        elif op_name == "add":
            dtype = "float32"
            A = te.placeholder(shape, dtype=dtype, name='A')
            B = te.placeholder(shape, dtype=dtype, name='B')
            # 执行加法操作
            C = topi.nn.add(A, B)
            # 创建调度器
            s = te.create_schedule([C.op])
            # 生成代码
            mod = tvm.build(s, [A, B, C])
            # 创建TVM运行时环境
            ctx = tvm.cpu(0)
            a = tvm.nd.array(input_data, ctx)
            b = tvm.nd.array(input_data, ctx)
            c = tvm.nd.empty(shape, dtype=dtype)
            # 执行计算
            mod(a, b, c)
            return c.asnumpy()
        else:
            raise ValueError(f"Unsupported operator: {op_name}")
        # 创建schedule
        s = te.create_schedule(B.op)
        # 编译生成可执行的模块
        f = tvm.build(s, [A, B], "llvm")
        # 创建TVM的context，这里使用CPU
        ctx = tvm.cpu(0)
        # 创建TVM NDArray
        a = tvm.nd.array(input_data, ctx)
        if op_name == "max":
            b = tvm.nd.array(np.zeros(shape[0], dtype=input_data.dtype), ctx)
        else:
            b = tvm.nd.array(np.zeros(shape, dtype=input_data.dtype), ctx)
        f(a, b)
        return b.asnumpy()

    passed_count = 0
    failed_count = 0
    failed_files = []
    operators_count = {}
    if not exists(TARGET_DIR):
        raise ValueError(f'Not exists path {TARGET_DIR}')
    
    for filename in os.listdir(TARGET_DIR):
        if filename.endswith('.ll'):
            file_path = join(TARGET_DIR, filename)
            try:
                # The function version must match the tvm version
                rt_m = tvm.runtime.load_from_ll(file_path, "ll")
                operator, shape = parse_filename(filename)
                input_data = np.random.uniform(-1, 1, size=shape).astype("float32")
                
                result_by_runtime_module = execute_by_runtime_module(rt_m, input_data, operator)
                result_by_tvm = execute_by_tvm(input_data,operator)
                tvm.testing.assert_allclose(result_by_tvm, result_by_runtime_module, rtol=1e-5)
                print(f"算子名称: {operator}, Shape信息: {shape} pass test")

                if operator in operators_count:
                    operators_count[operator] += 1
                else:
                    operators_count[operator] = 1
                passed_count += 1
            except Exception as e:
                print(f"算子 {filename} 未通过测试: {e}")
                failed_count += 1
                failed_files.append(filename)
    print(f"总共通过了 {passed_count} 个文件，未通过了 {failed_count} 个文件。")
    print("未通过测试的文件名:")
    for failed_file in failed_files:
        print(failed_file)

if __name__ == '__main__':
    # generate_ll()
    execute_ll()