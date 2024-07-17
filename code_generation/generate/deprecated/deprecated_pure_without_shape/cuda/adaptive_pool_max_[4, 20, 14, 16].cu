extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < (((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 6) + 6) % 8) == 0) ? ((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 7) + 7) >> 2) : (((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 7) + 7) >> 2) + 1)) - (((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 14) >> 3)); ++rv0) {
    for (int rv1 = 0; rv1 < 2; ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))], data[((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) >> 3) * 224) + ((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) >> 3)) & 7) * 14) >> 3) * 16)) + (rv0 * 16)) + ((((int)threadIdx.x) & 7) * 2)) + rv1)]);
    }
  }
}

