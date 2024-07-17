extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) % 133) / 19)]) * (1.000000e+00f / sqrtf(((T_multiply_red[((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) / 133) * 152) + ((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 3)) % 19) * 8)) + (((int)threadIdx.x) & 7))] * 1.428571e-01f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(38) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 38) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 7; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 38) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 38) + ((int)threadIdx.x))] + (data[(((((((int)blockIdx.x) >> 2) * 1064) + (k1 * 152)) + ((((int)blockIdx.x) & 3) * 38)) + ((int)threadIdx.x))] * data[(((((((int)blockIdx.x) >> 2) * 1064) + (k1 * 152)) + ((((int)blockIdx.x) & 3) * 38)) + ((int)threadIdx.x))]));
  }
}

