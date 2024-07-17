extern "C" __global__ void __launch_bounds__(64) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  if (((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) < 225) {
    T_cast[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 30) / 5)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) / 15) * 5) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 5))] * 1.666667e-01f) + 1.000000e-05f))));
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) < 75) {
    T_multiply_red[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int k1 = 0; k1 < 6; ++k1) {
    if (((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) < 75) {
      T_multiply_red[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] + (data[((((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) / 5) * 30) + (k1 * 5)) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 5))] * data[((((((((int)blockIdx.x) * 64) + ((int)threadIdx.x)) / 5) * 30) + (k1 * 5)) + (((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) % 5))]));
    }
  }
}

