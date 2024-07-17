extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ tensor) {
  T_divide[((int)threadIdx.x)] = (data[((int)threadIdx.x)] / powf((2.000000e+00f + (1.000000e-04f * tensor[((int)threadIdx.x)])), 7.500000e-01f));
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ data, float* __restrict__ tensor) {
  tensor[((int)threadIdx.x)] = 0.000000e+00f;
  tensor[((int)threadIdx.x)] = (tensor[((int)threadIdx.x)] + (data[((int)threadIdx.x)] * data[((int)threadIdx.x)]));
}

