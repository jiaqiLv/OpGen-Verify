extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    pool_max[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))], (((1 <= (((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 5) * 2) + rv0)) && (((rv0 >> 1) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 5)) < 5)) ? data[(((((((((int)blockIdx.x) * 24) + ((int)threadIdx.x)) / 5) * 9) + ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 5) * 2)) + rv0) - 1)] : -3.402823e+38f));
  }
}

