extern "C" __global__ void __launch_bounds__(5) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  T_strided_slice[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))] = a[(((((((int)blockIdx.x) / 3) * 102) + (((((((int)blockIdx.x) % 3) * 5) + ((int)threadIdx.x)) / 3) * 6)) + (((((int)blockIdx.x) * 2) + ((int)threadIdx.x)) % 3)) + 117)];
}

