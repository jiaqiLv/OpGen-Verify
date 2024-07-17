
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
extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum);
extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ adaptive_pool_avg, float* __restrict__ adaptive_pool_sum) {
  adaptive_pool_avg[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] / (((float)(((((((((int)blockIdx.x) & 1) * 4) + (((int)threadIdx.x) >> 3)) + 1) % 8) == 0) ? ((((((int)threadIdx.x) + 8) >> 5) + (((int)blockIdx.x) & 1)) >> 1) : (((((((int)threadIdx.x) + 8) >> 5) + (((int)blockIdx.x) & 1)) >> 1) + 1))) * ((float)(((((((((int)threadIdx.x) & 7) * 5) + 5) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 13) + 13) >> 3) : (((((((int)threadIdx.x) & 7) * 13) + 13) >> 3) + 1)) - (((((int)threadIdx.x) & 7) * 13) >> 3)))));
}

extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ adaptive_pool_sum, float* __restrict__ data) {
  adaptive_pool_sum[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = 0.000000e+00f;
  for (int rv0 = 0; rv0 < (((((((int)blockIdx.x) & 7) + 1) % 8) == 0) ? (((((int)blockIdx.x) & 7) + 1) >> 3) : ((((((int)blockIdx.x) & 7) + 1) >> 3) + 1)); ++rv0) {
    for (int rv1 = 0; rv1 < ((((((((int)threadIdx.x) * 5) + 5) % 8) == 0) ? (((((int)threadIdx.x) * 13) + 13) >> 3) : ((((((int)threadIdx.x) * 13) + 13) >> 3) + 1)) - ((((int)threadIdx.x) * 13) >> 3)); ++rv1) {
      adaptive_pool_sum[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = (adaptive_pool_sum[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] + data[(((((((int)blockIdx.x) >> 3) * 13) + (rv0 * 13)) + ((((int)threadIdx.x) * 13) >> 3)) + rv1)]);
    }
  }
}

