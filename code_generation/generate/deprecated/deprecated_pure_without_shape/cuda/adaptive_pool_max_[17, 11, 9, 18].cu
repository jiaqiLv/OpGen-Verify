extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < (((((((((((int)blockIdx.x) & 1) * 4) + (((int)threadIdx.x) >> 3)) + 1) % 8) == 0) ? ((((((int)blockIdx.x) & 1) * 9) + ((((((int)threadIdx.x) >> 3) * 9) + 9) >> 2)) >> 1) : (((((((int)blockIdx.x) & 1) * 9) + ((((((int)threadIdx.x) >> 3) * 9) + 9) >> 2)) >> 1) + 1)) - (((int)threadIdx.x) >> 3)) - ((((int)blockIdx.x) & 1) * 4)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((int)threadIdx.x) & 7) * 2) + 2) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 9) + 9) >> 2) : (((((((int)threadIdx.x) & 7) * 9) + 9) >> 2) + 1)) - (((((int)threadIdx.x) & 7) * 18) >> 3)); ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], data[(((((((((int)blockIdx.x) >> 1) * 162) + ((((int)blockIdx.x) & 1) * 72)) + ((((int)threadIdx.x) >> 3) * 18)) + (rv0 * 18)) + (((((int)threadIdx.x) & 7) * 18) >> 3)) + rv1)]);
    }
  }
}

