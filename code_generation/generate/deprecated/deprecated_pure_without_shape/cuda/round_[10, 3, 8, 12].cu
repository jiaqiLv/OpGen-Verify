extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  compute[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = roundf(data[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))]);
}

