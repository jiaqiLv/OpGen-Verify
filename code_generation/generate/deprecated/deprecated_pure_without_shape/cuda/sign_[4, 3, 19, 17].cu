extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_sign, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) < 969) {
    T_sign[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((0.000000e+00f < data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]) ? 1.000000e+00f : ((data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] < 0.000000e+00f) ? -1.000000e+00f : 0.000000e+00f));
  }
}

