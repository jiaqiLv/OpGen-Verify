extern "C" __global__ void __launch_bounds__(2) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))] * 7.936508e-03f);
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < 7; ++rv0) {
    for (int rv1 = 0; rv1 < 18; ++rv1) {
      adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] + data[((((((int)blockIdx.x) * 2016) + (((int)threadIdx.x) * 126)) + (rv0 * 18)) + rv1)]);
    }
  }
}

