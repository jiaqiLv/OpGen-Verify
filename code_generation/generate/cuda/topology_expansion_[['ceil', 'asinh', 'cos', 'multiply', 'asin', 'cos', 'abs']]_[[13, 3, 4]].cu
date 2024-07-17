extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ceilf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel_1(float* __restrict__ T_multiply, float* __restrict__ ph_0) {
  T_multiply[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] * __cosf(asinhf(ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(4) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = __cosf(asinf(ph_0[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))]));
}

extern "C" __global__ void default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((int)blockIdx.x)] = fabsf(asinf(ph_0[((int)blockIdx.x)]));
}
