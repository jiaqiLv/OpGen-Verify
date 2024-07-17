extern "C" __global__ void __launch_bounds__(28) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 28) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) % 44) * 7) + (((int)threadIdx.x) >> 2)) / 22)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((int)blockIdx.x) / 44) * 88) + (((((int)blockIdx.x) * 28) + ((int)threadIdx.x)) % 88))] * 7.142857e-02f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(56) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 14; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] + (data[((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 3)) / 11) * 1232) + (k1 * 88)) + (((((int)blockIdx.x) * 56) + ((int)threadIdx.x)) % 88))] * data[((((((((int)blockIdx.x) * 7) + (((int)threadIdx.x) >> 3)) / 11) * 1232) + (k1 * 88)) + (((((int)blockIdx.x) * 56) + ((int)threadIdx.x)) % 88))]));
  }
}

