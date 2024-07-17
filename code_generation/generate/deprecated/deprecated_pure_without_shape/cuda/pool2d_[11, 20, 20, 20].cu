extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      pool_max[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))], (((1 <= ((((((int)blockIdx.x) % 5) * 4) + ((((int)threadIdx.x) / 30) * 2)) + rv0)) && (1 <= (((((int)threadIdx.x) % 30) * 2) + rv1))) ? data[((((((((int)blockIdx.x) * 240) + ((((int)threadIdx.x) / 30) * 120)) + (rv0 * 60)) + ((((int)threadIdx.x) % 30) * 2)) + rv1) - 61)] : -3.402823e+38f));
    }
  }
}

