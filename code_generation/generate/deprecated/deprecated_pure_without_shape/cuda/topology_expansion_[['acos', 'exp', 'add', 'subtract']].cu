extern "C" __global__ void __launch_bounds__(4) default_function_kernel_1(float* __restrict__ T_subtract, float* __restrict__ ph_0) {
  T_subtract[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = (0.000000e+00f - __expf(ph_0[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(40) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = acosf(ph_0[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))]);
}

