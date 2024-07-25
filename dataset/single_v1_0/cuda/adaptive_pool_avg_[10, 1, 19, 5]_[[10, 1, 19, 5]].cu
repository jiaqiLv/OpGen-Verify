extern "C" __global__ void __launch_bounds__(40) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] / (((float)(((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 3) + 3) % 8) == 0) ? ((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) + 19) >> 3) : (((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) + 19) >> 3) + 1)) - (((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) >> 3))) * ((float)(((((((((int)threadIdx.x) & 7) * 5) + 5) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 5) + 5) >> 3) : (((((((int)threadIdx.x) & 7) * 5) + 5) >> 3) + 1)) - (((((int)threadIdx.x) & 7) * 5) >> 3)))));
}

extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < (((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 3) + 3) % 8) == 0) ? ((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) + 19) >> 3) : (((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) + 19) >> 3) + 1)) - (((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) >> 3)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((int)threadIdx.x) & 7) * 5) + 5) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 5) + 5) >> 3) : (((((((int)threadIdx.x) & 7) * 5) + 5) >> 3) + 1)) - (((((int)threadIdx.x) & 7) * 5) >> 3)); ++rv1) {
      adaptive_pool_sum[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] + data[((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) >> 3) * 95) + ((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 19) >> 3) * 5)) + (rv0 * 5)) + (((((int)threadIdx.x) & 7) * 5) >> 3)) + rv1)]);
    }
  }
}

