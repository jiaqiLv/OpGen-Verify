extern "C" __global__ void __launch_bounds__(36) default_function_kernel_1(float* __restrict__ T_subtract, float* __restrict__ ph_0) {
  T_subtract[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = (0.000000e+00f - acoshf(ph_0[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))]));
}

extern "C" __global__ void default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((int)blockIdx.x)] = __expf(ph_0[((int)blockIdx.x)]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(ceilf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

