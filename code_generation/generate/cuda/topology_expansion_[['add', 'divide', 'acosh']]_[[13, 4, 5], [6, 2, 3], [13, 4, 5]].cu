extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ T_add, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_add[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] + ph_3[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_divide, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_divide[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] / ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = acoshf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]);
}

