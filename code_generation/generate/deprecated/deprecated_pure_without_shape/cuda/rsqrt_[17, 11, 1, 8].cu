extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 3) + (((int)threadIdx.x) >> 3)) < 187) {
    compute[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = (1.000000e+00f / sqrtf(data[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))]));
  }
}

