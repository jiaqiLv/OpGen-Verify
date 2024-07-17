extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 21) {
    adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = -3.402823e+38f;
  }
  for (int rv0 = 0; rv0 < 12; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 21) {
        adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) * 1152) + (((int)threadIdx.x) * 36)) + (rv0 * 3)) + rv1)]);
      }
    }
  }
}

