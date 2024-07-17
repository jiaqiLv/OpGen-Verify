extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 3)) < 3675) {
    compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = atanf(data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
  }
}

