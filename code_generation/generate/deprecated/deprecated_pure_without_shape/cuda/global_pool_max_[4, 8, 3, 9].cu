extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((int)threadIdx.x)] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 9; ++rv1) {
      adaptive_pool_max[((int)threadIdx.x)] = max(adaptive_pool_max[((int)threadIdx.x)], data[(((((int)threadIdx.x) * 27) + (rv0 * 9)) + rv1)]);
    }
  }
}

