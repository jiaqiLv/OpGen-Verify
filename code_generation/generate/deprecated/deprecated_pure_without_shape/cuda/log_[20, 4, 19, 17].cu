extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4)) < 1615) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __logf(data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

