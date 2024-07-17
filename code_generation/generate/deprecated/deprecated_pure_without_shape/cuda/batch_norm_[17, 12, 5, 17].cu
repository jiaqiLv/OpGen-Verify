extern "C" __global__ void __launch_bounds__(34) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var) {
  T_divide[((((int)blockIdx.x) * 34) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 34) + ((int)threadIdx.x))] - moving_mean[((((((int)blockIdx.x) % 30) * 2) + (((int)threadIdx.x) / 17)) / 5)]) / sqrtf((moving_var[((((((int)blockIdx.x) % 30) * 2) + (((int)threadIdx.x) / 17)) / 5)] + 1.000000e-05f)));
}

