extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < (((((((((int)threadIdx.x) >> 3) * 7) + 7) % 8) == 0) ? ((((((int)threadIdx.x) >> 3) * 7) + 7) >> 3) : (((((((int)threadIdx.x) >> 3) * 7) + 7) >> 3) + 1)) - (((((int)threadIdx.x) >> 3) * 7) >> 3)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((int)threadIdx.x) & 7) * 3) + 3) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 11) + 11) >> 3) : (((((((int)threadIdx.x) & 7) * 11) + 11) >> 3) + 1)) - (((((int)threadIdx.x) & 7) * 11) >> 3)); ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))], data[(((((((int)blockIdx.x) * 77) + ((((((int)threadIdx.x) >> 3) * 7) >> 3) * 11)) + (rv0 * 11)) + (((((int)threadIdx.x) & 7) * 11) >> 3)) + rv1)]);
    }
  }
}

