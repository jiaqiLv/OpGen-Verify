extern "C" __global__ void default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((int)blockIdx.x)] = asinhf(acosf(ph_0[((int)blockIdx.x)]));
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = asinf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = ((ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] / acosf(ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))])) + ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))]);
}

