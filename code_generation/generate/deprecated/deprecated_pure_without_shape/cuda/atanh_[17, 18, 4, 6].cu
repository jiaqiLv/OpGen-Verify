extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4)) < 459) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = atanhf(data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

