extern "C" __global__ void __launch_bounds__(24) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) / 6)) < 189) {
    compute[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] = (data[((((int)blockIdx.x) * 24) + ((int)threadIdx.x))] * -1.000000e+00f);
  }
}

