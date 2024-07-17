extern "C" __global__ void __launch_bounds__(4) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) / 26) * 8) + ((((int)blockIdx.x) & 1) * 4)) + ((int)threadIdx.x))]) + Shift[((((((int)blockIdx.x) / 26) * 8) + ((((int)blockIdx.x) & 1) * 4)) + ((int)threadIdx.x))]);
}

