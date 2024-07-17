extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < ((((((((((int)blockIdx.x) & 1) * 20) + ((((int)threadIdx.x) >> 3) * 5)) + 5) % 8) == 0) ? ((((((int)blockIdx.x) & 1) * 5) + ((((((int)threadIdx.x) >> 3) * 5) + 5) >> 2)) >> 1) : (((((((int)blockIdx.x) & 1) * 5) + ((((((int)threadIdx.x) >> 3) * 5) + 5) >> 2)) >> 1) + 1)) - ((((((int)blockIdx.x) & 1) * 5) + (((int)threadIdx.x) >> 3)) >> 1)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((int)threadIdx.x) & 7) * 5) + 5) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 5) + 5) >> 3) : (((((((int)threadIdx.x) & 7) * 5) + 5) >> 3) + 1)) - (((((int)threadIdx.x) & 7) * 5) >> 3)); ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], data[((((((((int)blockIdx.x) >> 1) * 25) + (((((((int)blockIdx.x) & 1) * 5) + (((int)threadIdx.x) >> 3)) >> 1) * 5)) + (rv0 * 5)) + (((((int)threadIdx.x) & 7) * 5) >> 3)) + rv1)]);
    }
  }
}

