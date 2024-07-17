extern "C" __global__ void __launch_bounds__(48) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) / 12)) < 125) {
    T_cast[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 12) + (((int)threadIdx.x) >> 2)) % 75) / 25)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) / 12)) / 25) * 100) + (((((int)blockIdx.x) * 48) + ((int)threadIdx.x)) % 100))] * 3.333333e-01f) + 1.000000e-05f))));
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) < 125) {
    T_multiply_red[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int k1 = 0; k1 < 3; ++k1) {
    if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) < 125) {
      T_multiply_red[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] + (data[((((((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) / 25) * 300) + (k1 * 100)) + (((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 100))] * data[((((((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) / 25) * 300) + (k1 * 100)) + (((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 100))]));
    }
  }
}

