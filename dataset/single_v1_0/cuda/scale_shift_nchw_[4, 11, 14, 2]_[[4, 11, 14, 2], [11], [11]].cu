extern "C" __global__ void __launch_bounds__(44) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 44) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 44) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) % 7) * 11) + (((int)threadIdx.x) >> 2)) / 7)]) + Shift[((((((int)blockIdx.x) % 7) * 11) + (((int)threadIdx.x) >> 2)) / 7)]);
}

