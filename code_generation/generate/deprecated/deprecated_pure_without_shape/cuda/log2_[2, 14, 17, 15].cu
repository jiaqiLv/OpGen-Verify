extern "C" __global__ void __launch_bounds__(28) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] = __log2f(data[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))]);
}

