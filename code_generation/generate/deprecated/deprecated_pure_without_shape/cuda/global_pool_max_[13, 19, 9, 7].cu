extern "C" __global__ void __launch_bounds__(13) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 9; ++rv0) {
    for (int rv1 = 0; rv1 < 7; ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) * 819) + (((int)threadIdx.x) * 63)) + (rv0 * 7)) + rv1)]);
    }
  }
}

