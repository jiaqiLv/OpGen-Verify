extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ tensor) {
  if (((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) < 13923) {
    T_divide[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] / powf((2.000000e+00f + (1.000000e-04f * tensor[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))])), 7.500000e-01f));
  }
}

extern "C" __global__ void __launch_bounds__(51) default_function_kernel(float* __restrict__ data, float* __restrict__ tensor) {
  tensor[((((int)blockIdx.x) * 51) + ((int)threadIdx.x))] = 0.000000e+00f;
  tensor[((((int)blockIdx.x) * 51) + ((int)threadIdx.x))] = (tensor[((((int)blockIdx.x) * 51) + ((int)threadIdx.x))] + (data[((((int)blockIdx.x) * 51) + ((int)threadIdx.x))] * data[((((int)blockIdx.x) * 51) + ((int)threadIdx.x))]));
}

