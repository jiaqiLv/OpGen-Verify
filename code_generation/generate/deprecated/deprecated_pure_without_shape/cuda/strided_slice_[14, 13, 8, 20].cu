extern "C" __global__ void __launch_bounds__(15) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  T_strided_slice[((((int)blockIdx.x) * 15) + ((int)threadIdx.x))] = a[(((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 5)) / 7) * 160) + (((((((int)blockIdx.x) * 15) + ((int)threadIdx.x)) % 35) / 7) * 20)) + ((((int)blockIdx.x) + ((int)threadIdx.x)) % 7)) + 203)];
}

