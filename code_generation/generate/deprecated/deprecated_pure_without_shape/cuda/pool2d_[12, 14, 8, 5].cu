extern "C" __global__ void __launch_bounds__(56) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      pool_max[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))], ((((1 <= (((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) >> 3)) & 3) * 2) + rv0)) && (1 <= (((((int)threadIdx.x) & 7) * 2) + rv1))) && (((rv1 >> 1) + (((int)threadIdx.x) & 7)) < 8)) ? data[((((((((int)blockIdx.x) * 210) + ((((int)threadIdx.x) >> 3) * 30)) + (rv0 * 15)) + ((((int)threadIdx.x) & 7) * 2)) + rv1) - 16)] : -3.402823e+38f));
    }
  }
}

