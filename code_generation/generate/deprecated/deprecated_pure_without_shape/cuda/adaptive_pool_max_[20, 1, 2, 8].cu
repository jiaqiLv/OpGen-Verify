extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < ((((((((((int)blockIdx.x) & 3) * 4) + ((((int)threadIdx.x) >> 3) * 2)) + 2) % 8) == 0) ? ((((((int)threadIdx.x) + 8) >> 4) + (((int)blockIdx.x) & 3)) >> 1) : (((((((int)threadIdx.x) + 8) >> 4) + (((int)blockIdx.x) & 3)) >> 1) + 1)) - ((((int)blockIdx.x) & 3) >> 1)); ++rv0) {
    adaptive_pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) >> 1) * 8) + (rv0 * 8)) + (((int)threadIdx.x) & 7))]);
  }
}

