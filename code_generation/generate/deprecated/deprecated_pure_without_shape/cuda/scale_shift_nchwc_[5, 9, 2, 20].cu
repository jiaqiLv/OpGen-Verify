extern "C" __global__ void __launch_bounds__(50) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 50) + ((int)threadIdx.x))] * Scale[((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 10)) % 72) / 36) * 9) + (((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 9))]) + Shift[((((((((int)blockIdx.x) * 5) + (((int)threadIdx.x) / 10)) % 72) / 36) * 9) + (((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 9))]);
}

