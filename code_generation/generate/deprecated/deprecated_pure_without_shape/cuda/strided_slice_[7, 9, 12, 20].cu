extern "C" __global__ void __launch_bounds__(6) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) / 3)) < 35) {
    T_strided_slice[((((int)blockIdx.x) * 6) + ((int)threadIdx.x))] = a[(((((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) / 35) * 240) + (((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 35) / 7) * 20)) + (((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 7)) + 283)];
  }
}
