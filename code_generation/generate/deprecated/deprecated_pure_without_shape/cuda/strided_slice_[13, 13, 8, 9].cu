extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  T_strided_slice[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = a[((((((int)blockIdx.x) * 72) + ((((int)threadIdx.x) / 6) * 9)) + (((int)threadIdx.x) % 6)) + 93)];
}

