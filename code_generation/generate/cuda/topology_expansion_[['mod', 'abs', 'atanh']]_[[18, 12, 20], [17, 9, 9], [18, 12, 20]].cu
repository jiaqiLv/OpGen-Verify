extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = fabsf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_mod, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_mod[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = fmodf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = atanhf(ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))]);
}

