extern "C" __global__ void __launch_bounds__(5) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) < 42) {
    adaptive_pool_max[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))] = -3.402823e+38f;
  }
  for (int rv0 = 0; rv0 < 14; ++rv0) {
    for (int rv1 = 0; rv1 < 17; ++rv1) {
      if (((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) < 42) {
        adaptive_pool_max[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) * 1190) + (((int)threadIdx.x) * 238)) + (rv0 * 17)) + rv1)]);
      }
    }
  }
}

