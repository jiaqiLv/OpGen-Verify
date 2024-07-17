extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv1 = 0; rv1 < ((((((((int)threadIdx.x) & 7) + 1) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 9) + 9) >> 3) : (((((((int)threadIdx.x) & 7) * 9) + 9) >> 3) + 1)) - (((int)threadIdx.x) & 7)); ++rv1) {
    adaptive_pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) * 18) + ((((int)threadIdx.x) >> 3) * 9)) + rv1) + (((int)threadIdx.x) & 7))]);
  }
}

