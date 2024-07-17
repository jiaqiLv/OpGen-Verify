extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) < 3825) {
    compute[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = asinf(data[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))]);
  }
}

