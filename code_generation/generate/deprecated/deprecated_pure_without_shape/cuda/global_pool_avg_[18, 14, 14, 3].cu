extern "C" __global__ void __launch_bounds__(28) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] * 2.380952e-02f);
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 2)) < 63) {
    adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int rv0 = 0; rv0 < 14; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 2)) < 63) {
        adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] + data[((((((int)blockIdx.x) * 672) + (((int)threadIdx.x) * 42)) + (rv0 * 3)) + rv1)]);
      }
    }
  }
}

