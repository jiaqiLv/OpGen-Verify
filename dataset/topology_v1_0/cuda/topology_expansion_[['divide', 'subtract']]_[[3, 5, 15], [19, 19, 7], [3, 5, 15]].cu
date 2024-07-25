extern "C" __global__ void __launch_bounds__(5) default_function_kernel_1(float* __restrict__ T_subtract, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_subtract[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))] - ph_3[((((int)blockIdx.x) * 5) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_divide[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] / ph_3[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))]);
}
