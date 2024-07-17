extern "C" __global__ void __launch_bounds__(25) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 25) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 25) + ((int)threadIdx.x))] * weight[((((int)blockIdx.x) & 3) >> 1)]) * (1.000000e+00f / sqrtf(((T_multiply_red[((((((int)blockIdx.x) >> 2) * 50) + ((((int)blockIdx.x) & 1) * 25)) + ((int)threadIdx.x))] * 5.000000e-01f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) < 425) {
    T_multiply_red[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = 0.000000e+00f;
  }
  for (int k1 = 0; k1 < 2; ++k1) {
    if (((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) < 425) {
      T_multiply_red[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] + (data[((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) / 25) * 100) + (k1 * 50)) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 50))] * data[((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 1)) / 25) * 100) + (k1 * 50)) + (((((int)blockIdx.x) * 8) + ((int)threadIdx.x)) % 50))]));
    }
  }
}

