extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 2; ++rv0) {
    for (int rv1 = 0; rv1 < 16; ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) * 256) + (((int)threadIdx.x) * 32)) + (rv0 * 16)) + rv1)]);
    }
  }
}

