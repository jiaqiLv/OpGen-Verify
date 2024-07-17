extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) < 231) {
    compute[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = __sinf(data[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))]);
  }
}
