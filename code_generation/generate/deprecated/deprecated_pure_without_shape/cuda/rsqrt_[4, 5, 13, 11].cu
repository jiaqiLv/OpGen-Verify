extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 6) + (((int)threadIdx.x) >> 2)) < 715) {
    compute[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = (1.000000e+00f / sqrtf(data[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))]));
  }
}

