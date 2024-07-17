extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 4)) < 9) {
    adaptive_pool_avg[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] * 8.333333e-02f);
  }
}

extern "C" __global__ void __launch_bounds__(12) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv1 = 0; rv1 < 12; ++rv1) {
    adaptive_pool_sum[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] + data[(((((int)blockIdx.x) * 144) + (((int)threadIdx.x) * 12)) + rv1)]);
  }
}

