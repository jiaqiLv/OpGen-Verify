extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  if (((((int)blockIdx.x) * 16) + ((int)threadIdx.x)) < 99) {
    adaptive_pool_avg[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] * 7.575758e-03f);
  }
}

extern "C" __global__ void __launch_bounds__(9) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < 11; ++rv0) {
    for (int rv1 = 0; rv1 < 12; ++rv1) {
      adaptive_pool_sum[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 9) + ((int)threadIdx.x))] + data[((((((int)blockIdx.x) * 1188) + (((int)threadIdx.x) * 132)) + (rv0 * 12)) + rv1)]);
    }
  }
}

