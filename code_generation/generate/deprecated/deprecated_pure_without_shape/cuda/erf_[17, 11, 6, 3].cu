extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) / 6)) < 561) {
    compute[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = erff(data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))]);
  }
}
