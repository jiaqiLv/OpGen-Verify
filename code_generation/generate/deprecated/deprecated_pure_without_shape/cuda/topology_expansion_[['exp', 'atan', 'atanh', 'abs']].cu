extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = atanhf(atanf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = __expf(ph_0[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = fabsf(ph_0[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))]);
}
