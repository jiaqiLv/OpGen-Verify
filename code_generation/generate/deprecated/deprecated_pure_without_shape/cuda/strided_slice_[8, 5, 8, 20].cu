extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  if (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) < 105) {
    T_strided_slice[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = a[(((((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) / 35) * 160) + (((((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 35) / 7) * 20)) + ((((int)blockIdx.x) + ((int)threadIdx.x)) % 7)) + 203)];
  }
}

