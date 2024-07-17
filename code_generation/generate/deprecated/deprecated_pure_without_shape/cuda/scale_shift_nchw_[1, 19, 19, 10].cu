extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 6) + (((int)threadIdx.x) / 10)) < 361) {
    ScaleShift[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] * Scale[(((((int)blockIdx.x) * 6) + (((int)threadIdx.x) / 10)) / 19)]) + Shift[(((((int)blockIdx.x) * 6) + (((int)threadIdx.x) / 10)) / 19)]);
  }
}

