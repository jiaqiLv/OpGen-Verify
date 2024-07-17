extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 432) / 27)]) * (1.000000e+00f / sqrtf(((T_multiply_red[((((((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 4)) / 27) * 27) + (((((((int)blockIdx.x) * 5) + ((int)threadIdx.x)) % 27) / 3) * 3)) + (((((int)blockIdx.x) * 2) + ((int)threadIdx.x)) % 3))] * 6.250000e-02f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(54) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 16; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] + (data[((((((int)blockIdx.x) * 864) + ((((int)threadIdx.x) / 27) * 432)) + (k1 * 27)) + (((int)threadIdx.x) % 27))] * data[((((((int)blockIdx.x) * 864) + ((((int)threadIdx.x) / 27) * 432)) + (k1 * 27)) + (((int)threadIdx.x) % 27))]));
  }
}

