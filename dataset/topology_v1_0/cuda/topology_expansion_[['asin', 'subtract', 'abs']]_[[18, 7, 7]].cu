extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = fabsf((ph_0[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] - asinf(ph_0[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))])));
}
