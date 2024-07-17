extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ T_mod, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_mod[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = fmodf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_12(float* __restrict__ T_add, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))) + ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_16(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(fmodf(__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))), ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = atanhf(__cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_11(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_7(float* __restrict__ T_divide, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_divide[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (asinhf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])) / acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_4(float* __restrict__ T_add, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (asinhf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])) + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_15(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __sinf(fmodf(__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))), ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(__cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_10(float* __restrict__ T_divide, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_divide[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))) / ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(2) default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))] = atanf(acosf(ph_0[((((int)blockIdx.x) * 2) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_6(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinf(asinhf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_9(float* __restrict__ T_subtract, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_subtract[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] - __sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_13(float* __restrict__ T_mod, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    T_mod[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = fmodf(__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))), ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
  }
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel_8(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = asinf(asinhf(acosf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))])));
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel_5(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = acoshf(asinhf(acosf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))])));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_14(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = atanf(fmodf(__sinf((ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]))), ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
  }
}

