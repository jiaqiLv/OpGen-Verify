extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = asinf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}

