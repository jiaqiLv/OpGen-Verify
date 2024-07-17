extern "C" __global__ void __launch_bounds__(13) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  if (((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) < 105) {
    T_strided_slice[((((int)blockIdx.x) * 13) + ((int)threadIdx.x))] = a[(((((((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) / 35) * 204) + (((((((int)blockIdx.x) * 13) + ((int)threadIdx.x)) % 35) / 7) * 17)) + (((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 7)) + 241)];
  }
}

