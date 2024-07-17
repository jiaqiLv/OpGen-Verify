extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < (((((((((int)blockIdx.x) & 1) * 4) + (((int)threadIdx.x) >> 3)) + 1) % 8) == 0) ? ((((((int)threadIdx.x) + 8) >> 5) + (((int)blockIdx.x) & 1)) >> 1) : (((((((int)threadIdx.x) + 8) >> 5) + (((int)blockIdx.x) & 1)) >> 1) + 1)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((int)threadIdx.x) & 7) * 4) + 4) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 5) + 5) >> 1) : (((((((int)threadIdx.x) & 7) * 5) + 5) >> 1) + 1)) - (((((int)threadIdx.x) & 7) * 20) >> 3)); ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], data[(((((((int)blockIdx.x) >> 1) * 20) + (rv0 * 20)) + (((((int)threadIdx.x) & 7) * 20) >> 3)) + rv1)]);
    }
  }
}

