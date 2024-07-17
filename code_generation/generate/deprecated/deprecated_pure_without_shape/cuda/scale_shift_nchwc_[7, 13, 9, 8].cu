extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) % 52) / 26) * 13) + (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 13))]) + Shift[((((((int)blockIdx.x) % 52) / 26) * 13) + (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 13))]);
}

