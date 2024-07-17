extern "C" __global__ void __launch_bounds__(28) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 14) + (((int)threadIdx.x) >> 1)) < 3375) {
    compute[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] = (1.000000e+00f / sqrtf(data[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))]));
  }
}

