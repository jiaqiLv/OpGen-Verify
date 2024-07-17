
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
extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < (((((((((int)threadIdx.x) >> 3) * 3) + 3) % 8) == 0) ? ((((((int)threadIdx.x) >> 3) * 3) + 3) >> 3) : (((((((int)threadIdx.x) >> 3) * 3) + 3) >> 3) + 1)) - (((((int)threadIdx.x) >> 3) * 3) >> 3)); ++rv0) {
    for (int rv1 = 0; rv1 < (((((((((int)threadIdx.x) & 7) * 2) + 2) % 8) == 0) ? ((((((int)threadIdx.x) & 7) * 9) + 9) >> 2) : (((((((int)threadIdx.x) & 7) * 9) + 9) >> 2) + 1)) - (((((int)threadIdx.x) & 7) * 18) >> 3)); ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))], data[(((((((int)blockIdx.x) * 54) + ((((((int)threadIdx.x) >> 3) * 3) >> 3) * 18)) + (rv0 * 18)) + (((((int)threadIdx.x) & 7) * 18) >> 3)) + rv1)]);
    }
  }
}

