extern "C" __global__ void __launch_bounds__(36) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = atanf(ph_0[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(4) default_function_kernel(float* __restrict__ T_add, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_add[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] + ph_3[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))]);
}
