extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    pool_max[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))], ((1 <= (((((int)threadIdx.x) % 5) * 2) + rv0)) ? data[((((((int)blockIdx.x) * 120) + (((int)threadIdx.x) * 2)) + rv0) - 1)] : -3.402823e+38f));
  }
}

