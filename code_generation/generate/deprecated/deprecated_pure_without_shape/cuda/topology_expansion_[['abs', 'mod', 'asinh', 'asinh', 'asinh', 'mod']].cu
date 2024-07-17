extern "C" __global__ void __launch_bounds__(18) default_function_kernel_2(float* __restrict__ T_mod, float* __restrict__ ph_0) {
  T_mod[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))] = fmodf(asinhf(ph_0[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))]), ph_0[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(fmodf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

