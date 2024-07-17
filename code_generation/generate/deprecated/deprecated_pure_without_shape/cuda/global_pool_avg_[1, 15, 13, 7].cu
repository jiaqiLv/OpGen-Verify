extern "C" __global__ void __launch_bounds__(15) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((int)threadIdx.x)] = (adaptive_pool_sum[((int)threadIdx.x)] * 1.098901e-02f);
}

extern "C" __global__ void __launch_bounds__(15) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((int)threadIdx.x)] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < 13; ++rv0) {
    for (int rv1 = 0; rv1 < 7; ++rv1) {
      adaptive_pool_sum[((int)threadIdx.x)] = (adaptive_pool_sum[((int)threadIdx.x)] + data[(((((int)threadIdx.x) * 91) + (rv0 * 7)) + rv1)]);
    }
  }
}

