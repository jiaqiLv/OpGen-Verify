extern "C" __global__ void __launch_bounds__(38) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var) {
  T_divide[((((int)blockIdx.x) * 38) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 38) + ((int)threadIdx.x))] - moving_mean[0]) / sqrtf((moving_var[0] + 1.000000e-05f)));
}

