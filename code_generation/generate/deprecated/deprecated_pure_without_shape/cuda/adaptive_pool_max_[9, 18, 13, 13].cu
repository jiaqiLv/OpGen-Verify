extern "C" __global__ void __launch_bounds__(27) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 27) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < ((((((((((((int)blockIdx.x) * 27) + ((int)threadIdx.x)) & 63) >> 3) * 5) + 5) % 8) == 0) ? (((((((((int)blockIdx.x) * 27) + ((int)threadIdx.x)) & 63) >> 3) * 13) + 13) >> 3) : ((((((((((int)blockIdx.x) * 27) + ((int)threadIdx.x)) & 63) >> 3) * 13) + 13) >> 3) + 1)) - ((((((((int)blockIdx.x) * 27) + ((int)threadIdx.x)) & 63) >> 3) * 13) >> 3)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) & 7) * 5) + 5) % 8) == 0) ? ((((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) & 7) * 13) + 13) >> 3) : (((((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) & 7) * 13) + 13) >> 3) + 1)) - (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) & 7) * 13) >> 3)); ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 27) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 27) + ((int)threadIdx.x))], data[((((((((((int)blockIdx.x) * 27) + ((int)threadIdx.x)) >> 6) * 169) + (((((((((int)blockIdx.x) * 27) + ((int)threadIdx.x)) & 63) >> 3) * 13) >> 3) * 13)) + (rv0 * 13)) + (((((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) & 7) * 13) >> 3)) + rv1)]);
    }
  }
}

