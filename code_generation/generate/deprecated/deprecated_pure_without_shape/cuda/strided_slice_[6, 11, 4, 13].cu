extern "C" __global__ void __launch_bounds__(14) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  T_strided_slice[((((int)blockIdx.x) * 14) + ((int)threadIdx.x))] = a[((((((int)blockIdx.x) * 52) + ((((int)threadIdx.x) / 7) * 13)) + (((int)threadIdx.x) % 7)) + 81)];
}

