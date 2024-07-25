extern "C" __global__ void __launch_bounds__(42) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 42) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 42) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) & 15) >> 3) * 2) + (((int)threadIdx.x) & 1))]) + Shift[((((((int)blockIdx.x) & 15) >> 3) * 2) + (((int)threadIdx.x) & 1))]);
}

