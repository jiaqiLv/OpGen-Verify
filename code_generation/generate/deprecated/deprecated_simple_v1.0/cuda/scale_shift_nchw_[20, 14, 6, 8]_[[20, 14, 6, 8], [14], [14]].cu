extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 4)) % 42) / 3)]) + Shift[((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 4)) % 42) / 3)]);
}

