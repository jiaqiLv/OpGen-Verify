extern "C" __global__ void __launch_bounds__(50) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      pool_max[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))], (((((1 <= ((((((((int)blockIdx.x) * 25) + (((int)threadIdx.x) >> 1)) % 35) / 7) * 2) + rv0)) && ((((((((int)blockIdx.x) * 25) + (((int)threadIdx.x) >> 1)) % 35) / 7) + (rv0 >> 1)) < 5)) && (1 <= (((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 14) * 2) + rv1))) && (((rv1 >> 1) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 14)) < 14)) ? data[(((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 10)) / 7) * 243) + (((((((int)blockIdx.x) * 25) + (((int)threadIdx.x) >> 1)) % 35) / 7) * 54)) + (rv0 * 27)) + ((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 14) * 2)) + rv1) - 28)] : -3.402823e+38f));
    }
  }
}

