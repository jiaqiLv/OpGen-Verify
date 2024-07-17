extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 2)) < 405) {
    T_cast[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) % 135) / 9)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) / 135) * 18) + (((((int)blockIdx.x) * 10) + ((int)threadIdx.x)) % 18))] * 6.666667e-02f) + 1.000000e-05f))));
  }
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) < 27) {
    T_multiply_red[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int k1 = 0; k1 < 15; ++k1) {
    if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 2)) < 27) {
      T_multiply_red[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] + (data[((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) / 9) * 270) + (k1 * 18)) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 18))] * data[((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) / 9) * 270) + (k1 * 18)) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 18))]));
    }
  }
}

