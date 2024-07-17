extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] + acosf((ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] / asinf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))]))));
}
