
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
extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(8) default_function_kernel(float* __restrict__ adaptive_pool_max, float* __restrict__ data) {
  adaptive_pool_max[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 15; ++rv0) {
    for (int rv1 = 0; rv1 < 17; ++rv1) {
      adaptive_pool_max[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))] = max(adaptive_pool_max[((((int)blockIdx.x) * 8) + ((int)threadIdx.x))], data[((((((int)blockIdx.x) * 2040) + (((int)threadIdx.x) * 255)) + (rv0 * 17)) + rv1)]);
    }
  }
}

