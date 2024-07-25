extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_add, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((0.000000e+00f - ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]) + ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(12) default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  compute[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = __sinf((ph_0[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] * ph_3[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_3) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __expf((0.000000e+00f - ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acoshf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] * ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}
