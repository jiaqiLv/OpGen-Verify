extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4)) < 289) {
    T_divide[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] - moving_mean[(((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4)) % 17)]) / sqrtf((moving_var[(((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4)) % 17)] + 1.000000e-05f)));
  }
}

