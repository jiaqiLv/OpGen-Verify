extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      for (int rv2 = 0; rv2 < 3; ++rv2) {
        pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))], ((((((1 <= rv0) && (rv0 < 2)) && (1 <= ((((((int)blockIdx.x) & 1) * 10) + ((((int)threadIdx.x) >> 3) * 2)) + rv1))) && (((((((int)threadIdx.x) >> 3) + (rv1 >> 1)) / 5) + (((int)blockIdx.x) & 1)) < 2)) && (1 <= (((((int)threadIdx.x) & 7) * 2) + rv2))) ? data[(((((((((((int)blockIdx.x) >> 1) * 304) + (rv0 * 304)) + ((((int)blockIdx.x) & 1) * 160)) + ((((int)threadIdx.x) >> 3) * 32)) + (rv1 * 16)) + ((((int)threadIdx.x) & 7) * 2)) + rv2) - 321)] : -3.402823e+38f));
      }
    }
  }
}

