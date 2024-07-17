extern "C" __global__ void __launch_bounds__(18) default_function_kernel(float* __restrict__ T_strided_slice, float* __restrict__ a) {
  if (((((int)blockIdx.x) * 6) + (((int)threadIdx.x) / 3)) < 25) {
    T_strided_slice[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))] = a[(((((((((int)blockIdx.x) * 18) + ((int)threadIdx.x)) / 25) * 120) + (((((((int)blockIdx.x) * 18) + ((int)threadIdx.x)) % 25) / 5) * 8)) + (((((int)blockIdx.x) * 3) + ((int)threadIdx.x)) % 5)) + 139)];
  }
}

