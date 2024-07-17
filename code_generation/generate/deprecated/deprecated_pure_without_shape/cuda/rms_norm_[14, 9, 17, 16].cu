extern "C" __global__ void __launch_bounds__(56) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 3)) % 306) / 34)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 3)) / 306) * 272) + (((((int)blockIdx.x) * 56) + ((int)threadIdx.x)) % 272))] * 1.111111e-01f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 9; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] + (data[(((((((int)blockIdx.x) / 17) * 2448) + (k1 * 272)) + ((((int)blockIdx.x) % 17) * 16)) + ((int)threadIdx.x))] * data[(((((((int)blockIdx.x) / 17) * 2448) + (k1 * 272)) + ((((int)blockIdx.x) % 17) * 16)) + ((int)threadIdx.x))]));
  }
}

