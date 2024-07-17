extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] / (((float)(((((((((int)threadIdx.x) >> 3) * 3) + 3) % 8) == 0) ? ((((((int)threadIdx.x) >> 3) * 3) + 3) >> 3) : (((((((int)threadIdx.x) >> 3) * 3) + 3) >> 3) + 1)) - (((((int)threadIdx.x) >> 3) * 3) >> 3))) * ((float)((((((((int)threadIdx.x) & 7) + 1) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 9) + 9) >> 3) : (((((((int)threadIdx.x) & 7) * 9) + 9) >> 3) + 1)) - (((int)threadIdx.x) & 7)))));
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < (((((((((int)threadIdx.x) >> 3) * 3) + 3) % 8) == 0) ? ((((((int)threadIdx.x) >> 3) * 3) + 3) >> 3) : (((((((int)threadIdx.x) >> 3) * 3) + 3) >> 3) + 1)) - (((((int)threadIdx.x) >> 3) * 3) >> 3)); ++rv0) {
    for (int rv1 = 0; rv1 < ((((((((int)threadIdx.x) & 7) + 1) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 9) + 9) >> 3) : (((((((int)threadIdx.x) & 7) * 9) + 9) >> 3) + 1)) - (((int)threadIdx.x) & 7)); ++rv1) {
      adaptive_pool_sum[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] + data[(((((((int)blockIdx.x) * 27) + ((((((int)threadIdx.x) >> 3) * 3) >> 3) * 9)) + (rv0 * 9)) + rv1) + (((int)threadIdx.x) & 7))]);
    }
  }
}
