extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      for (int rv2 = 0; rv2 < 3; ++rv2) {
        pool_max[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))], ((((((1 <= ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) % 288) >> 5) * 2) + rv0)) && ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) % 288) >> 5) + (rv0 >> 1)) < 9)) && (1 <= ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) & 31) >> 2) * 2) + rv1))) && ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) & 31) >> 2) + (rv1 >> 1)) < 8)) && (1 <= (((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) & 7) * 2) + rv2))) ? data[(((((((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 6)) / 96) * 4080) + (((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) % 288) >> 5) * 480)) + (rv0 * 240)) + (((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) & 31) >> 2) * 32)) + (rv1 * 16)) + ((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) & 7) * 2)) + rv2) - 257)] : -3.402823e+38f));
      }
    }
  }
}

