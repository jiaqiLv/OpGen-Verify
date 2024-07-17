extern "C" __global__ void __launch_bounds__(3) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 3) + ((int)threadIdx.x))] = __sinf((ph_0[((((int)blockIdx.x) * 3) + ((int)threadIdx.x))] + __cosf(ph_0[((((int)blockIdx.x) * 3) + ((int)threadIdx.x))])));
}