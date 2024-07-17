
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
extern "C" __global__ void __launch_bounds__(28) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum);
extern "C" __global__ void __launch_bounds__(28) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(28) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((int)threadIdx.x)] = (adaptive_pool_sum[((int)threadIdx.x)] * 1.666667e-02f);
}

extern "C" __global__ void __launch_bounds__(28) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((int)threadIdx.x)] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 20; ++rv1) {
      adaptive_pool_sum[((int)threadIdx.x)] = (adaptive_pool_sum[((int)threadIdx.x)] + data[(((((int)threadIdx.x) * 60) + (rv0 * 20)) + rv1)]);
    }
  }
}

