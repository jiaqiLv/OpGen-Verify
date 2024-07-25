extern "C" __global__ void __launch_bounds__(42) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 21) + (((int)threadIdx.x) >> 1)) < 3339820) {
    compute[((((int)blockIdx.x) * 42) + ((int)threadIdx.x))] = tanf(data[((((int)blockIdx.x) * 42) + ((int)threadIdx.x))]);
  }
}

