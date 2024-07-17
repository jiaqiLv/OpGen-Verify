extern "C" __global__ void __launch_bounds__(49) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 49) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      for (int rv2 = 0; rv2 < 3; ++rv2) {
        pool_max[((((int)blockIdx.x) * 49) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 49) + ((int)threadIdx.x))], ((((((1 <= ((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) / 7)) % 40) >> 3) * 2) + rv0)) && ((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) / 7)) % 40) >> 3) + (rv0 >> 1)) < 5)) && (1 <= ((((((((int)blockIdx.x) * 49) + ((int)threadIdx.x)) % 56) >> 3) * 2) + rv1))) && ((((((((int)blockIdx.x) * 49) + ((int)threadIdx.x)) % 56) >> 3) + (rv1 >> 1)) < 7)) && (1 <= ((((((int)blockIdx.x) + ((int)threadIdx.x)) & 7) * 2) + rv2))) ? data[(((((((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) / 7)) / 40) * 1872) + (((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) / 7)) % 40) >> 3) * 416)) + (rv0 * 208)) + (((((((int)blockIdx.x) * 49) + ((int)threadIdx.x)) % 56) >> 3) * 32)) + (rv1 * 16)) + (((((int)blockIdx.x) + ((int)threadIdx.x)) & 7) * 2)) + rv2) - 225)] : -3.402823e+38f));
      }
    }
  }
}

