extern "C" __global__ void __launch_bounds__(54) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) * 27) + (((int)threadIdx.x) >> 1)) % 2394) / 133)]) + Shift[((((((int)blockIdx.x) * 27) + (((int)threadIdx.x) >> 1)) % 2394) / 133)]);
}

