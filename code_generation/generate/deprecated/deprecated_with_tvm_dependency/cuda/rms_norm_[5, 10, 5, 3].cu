
#if (((__CUDACC_VER_MAJOR__ == 11) && (__CUDACC_VER_MINOR__ >= 4)) || \
     (__CUDACC_VER_MAJOR__ > 11))
#define TVM_ENABLE_L2_PREFETCH 1
#else
#define TVM_ENABLE_L2_PREFETCH 0
#endif

#ifdef _WIN32
  using uint = unsigned int;
  using uchar = unsigned char;
  using ushort = unsigned short;
  using int64_t = long long;
  using uint64_t = unsigned long long;
#else
  #define uint unsigned int
  #define uchar unsigned char
  #define ushort unsigned short
  #define int64_t long long
  #define uint64_t unsigned long long
#endif
extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight);
extern "C" __global__ void __launch_bounds__(15) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ T_cast, float* __restrict__ T_multiply_red, float* __restrict__ data, float* __restrict__ weight) {
  if (((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) < 375) {
    T_cast[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] * weight[((((((int)blockIdx.x) * 32) + ((int)threadIdx.x)) % 150) / 15)]) * (1.000000e+00f / sqrtf(((T_multiply_red[(((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 1)) / 75) * 15) + (((((int)blockIdx.x) * 2) + ((int)threadIdx.x)) % 15))] * 1.000000e-01f) + 1.000000e-05f))));
  }
}

extern "C" __global__ void __launch_bounds__(15) default_function_kernel(float* __restrict__ T_multiply_red, float* __restrict__ data) {
  T_multiply_red[((((int)blockIdx.x) * 15) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int k1 = 0; k1 < 10; ++k1) {
    T_multiply_red[((((int)blockIdx.x) * 15) + ((int)threadIdx.x))] = (T_multiply_red[((((int)blockIdx.x) * 15) + ((int)threadIdx.x))] + (data[(((((int)blockIdx.x) * 150) + (k1 * 15)) + ((int)threadIdx.x))] * data[(((((int)blockIdx.x) * 150) + (k1 * 15)) + ((int)threadIdx.x))]));
  }
}

