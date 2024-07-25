extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = atanhf(ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = __sinf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ T_divide, float* __restrict__ ph_0) {
  T_divide[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (acoshf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]) / ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}
