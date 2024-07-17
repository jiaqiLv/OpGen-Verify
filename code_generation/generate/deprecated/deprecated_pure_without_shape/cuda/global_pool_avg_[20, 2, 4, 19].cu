extern "C" __global__ void __launch_bounds__(10) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((((int)blockIdx.x) * 10) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 10) + ((int)threadIdx.x))] * 1.315789e-02f);
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < 4; ++rv0) {
    for (int rv1 = 0; rv1 < 19; ++rv1) {
      adaptive_pool_sum[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] + data[((((((int)blockIdx.x) * 608) + (((int)threadIdx.x) * 76)) + (rv0 * 19)) + rv1)]);
    }
  }
}

