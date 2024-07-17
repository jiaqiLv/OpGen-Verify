extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var) {
  T_divide[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] - moving_mean[((((((int)blockIdx.x) & 7) * 3) + (((int)threadIdx.x) / 10)) >> 1)]) / sqrtf((moving_var[((((((int)blockIdx.x) & 7) * 3) + (((int)threadIdx.x) / 10)) >> 1)] + 1.000000e-05f)));
}

