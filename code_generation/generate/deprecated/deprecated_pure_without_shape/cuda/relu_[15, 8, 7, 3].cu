extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 3)) < 315) {
    compute[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = max(data[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))], 0.000000e+00f);
  }
}

