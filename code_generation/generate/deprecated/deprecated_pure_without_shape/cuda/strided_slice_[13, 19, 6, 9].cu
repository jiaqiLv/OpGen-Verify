extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  T_strided_slice[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = a[((((((int)blockIdx.x) * 54) + ((((int)threadIdx.x) / 6) * 9)) + (((int)threadIdx.x) % 6)) + 75)];
}

