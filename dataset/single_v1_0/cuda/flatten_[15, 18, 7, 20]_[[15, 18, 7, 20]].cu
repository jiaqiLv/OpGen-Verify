extern "C" __global__ void __launch_bounds__(50) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))] = data[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))];
}

