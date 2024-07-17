extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var) {
  T_divide[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] - moving_mean[((((((int)blockIdx.x) % 54) * 2) + (((int)threadIdx.x) / 30)) / 9)]) / sqrtf((moving_var[((((((int)blockIdx.x) % 54) * 2) + (((int)threadIdx.x) / 30)) / 9)] + 1.000000e-05f)));
}

