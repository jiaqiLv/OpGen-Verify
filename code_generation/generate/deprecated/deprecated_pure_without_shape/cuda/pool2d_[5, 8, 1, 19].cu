extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))], (((((1 <= rv0) && (rv0 < 2)) && (1 <= (((((((int)blockIdx.x) * 11) + ((int)threadIdx.x)) % 29) * 2) + rv1))) && (((rv1 >> 1) + (((((int)blockIdx.x) * 11) + ((int)threadIdx.x)) % 29)) < 29)) ? data[((((((((((int)blockIdx.x) * 40) + ((int)threadIdx.x)) / 29) * 57) + (rv0 * 57)) + ((((((int)blockIdx.x) * 11) + ((int)threadIdx.x)) % 29) * 2)) + rv1) - 58)] : -3.402823e+38f));
    }
  }
}

