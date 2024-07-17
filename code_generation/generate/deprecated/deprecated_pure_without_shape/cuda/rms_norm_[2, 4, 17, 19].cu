extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) < 323) {
    T_cast[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 1292) / 323)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 2)) / 323) * 323) + (((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 323))] * 2.500000e-01f) + 1.000000e-05f))));
  }
}

extern "C" __global__ void __launch_bounds__(19) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 4; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] + (data[(((((((int)blockIdx.x) / 17) * 1292) + (k1 * 323)) + ((((int)blockIdx.x) % 17) * 19)) + ((int)threadIdx.x))] * data[(((((((int)blockIdx.x) / 17) * 1292) + (k1 * 323)) + ((((int)blockIdx.x) % 17) * 19)) + ((int)threadIdx.x))]));
  }
}

