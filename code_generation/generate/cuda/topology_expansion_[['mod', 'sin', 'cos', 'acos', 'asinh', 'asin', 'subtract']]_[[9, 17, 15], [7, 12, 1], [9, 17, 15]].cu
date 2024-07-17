extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __sinf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel_4(float* __restrict__ T_subtract, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_subtract[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (fmodf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))], ph_3[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]) - ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]);
}

extern "C" __global__ void default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((int)blockIdx.x)] = acosf(__cosf(ph_0[((int)blockIdx.x)]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(__cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinf(fmodf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}
