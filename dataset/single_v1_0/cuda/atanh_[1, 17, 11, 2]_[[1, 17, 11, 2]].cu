extern "C" __global__ void __launch_bounds__(12) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 6) + (((int)threadIdx.x) >> 1)) < 187) {
    compute[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))] = atanhf(data[((((int)blockIdx.x) * 12) + ((int)threadIdx.x))]);
  }
}

