extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute_6, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 114985) {
    compute_6[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acoshf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ compute_10, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) < 114985) {
    compute_10[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = acoshf(__cosf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_3(float* __restrict__ compute_14, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  if (((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) < 114985) {
    compute_14[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = fabsf((ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] - ph_3[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_2(float* __restrict__ compute_12, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) < 114985) {
    compute_12[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = ceilf(__cosf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]));
  }
}

