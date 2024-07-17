extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]) + ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_3(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_13(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_7(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(acoshf(fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_11(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acosf(fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(4) default_function_kernel_4(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))] = __cosf(fabsf(ph_0[((((int)blockIdx.x) * 4) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_8(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __cosf(acoshf(fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_10(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __cosf(fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_14(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinf((fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])) * ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = atanhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_6(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(acoshf(fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_5(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (acoshf(fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])) + fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_15(float* __restrict__ T_mod, float* __restrict__ ph_0) {
  T_mod[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = fmodf((fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])) * ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]), fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_9(float* __restrict__ T_multiply, float* __restrict__ ph_0) {
  T_multiply[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (acoshf(fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])) * fabsf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_subtract, float* __restrict__ ph_0) {
  T_subtract[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]) - ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_12(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = atanhf(fabsf(asinhf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))])));
}

