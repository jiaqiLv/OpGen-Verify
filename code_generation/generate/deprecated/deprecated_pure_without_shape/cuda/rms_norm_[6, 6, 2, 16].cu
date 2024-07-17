extern "C" __global__ void __launch_bounds__(18) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 18) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 9) + (((int)threadIdx.x) >> 1)) % 96) >> 4)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 6)) >> 5) * 32) + (((((int)blockIdx.x) * 18) + ((int)threadIdx.x)) & 31))] * 1.666667e-01f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 6; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] + (data[(((((((int)blockIdx.x) >> 1) * 192) + (k1 * 32)) + ((((int)blockIdx.x) & 1) * 16)) + ((int)threadIdx.x))] * data[(((((((int)blockIdx.x) >> 1) * 192) + (k1 * 32)) + ((((int)blockIdx.x) & 1) * 16)) + ((int)threadIdx.x))]));
  }
}

