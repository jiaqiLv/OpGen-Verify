extern "C" __global__ void __launch_bounds__(40) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  T_cast[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 40) + ((int)threadIdx.x))] * weight[(((((int)blockIdx.x) % 10) * 2) + (((int)threadIdx.x) / 20))]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((int)blockIdx.x) / 10) * 20) + (((int)threadIdx.x) % 20))] * 5.000000e-02f) + 1.000000e-05f))));
}

extern "C" __global__ void __launch_bounds__(19) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 20; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 19) + ((int)threadIdx.x))] + (data[((((((((int)blockIdx.x) * 19) + ((int)threadIdx.x)) / 20) * 400) + (k1 * 20)) + (((((int)blockIdx.x) * 19) + ((int)threadIdx.x)) % 20))] * data[((((((((int)blockIdx.x) * 19) + ((int)threadIdx.x)) / 20) * 400) + (k1 * 20)) + (((((int)blockIdx.x) * 19) + ((int)threadIdx.x)) % 20))]));
  }
}

