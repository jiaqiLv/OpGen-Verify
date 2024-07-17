extern "C" __global__ void __launch_bounds__(18) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      pool_max[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))], ((((1 <= rv0) && (1 <= (((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 14) * 2) + rv1))) && (((rv1 >> 1) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 14)) < 14)) ? data[((((((((((int)blockIdx.x) * 9) + (((int)threadIdx.x) >> 1)) / 7) * 54) + (rv0 * 27)) + ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 14) * 2)) + rv1) - 28)] : -3.402823e+38f));
    }
  }
}

