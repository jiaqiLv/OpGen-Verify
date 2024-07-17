
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
extern "C" __global__ void __launch_bounds__(56) default_function_kernel(float* __restrict__ compute, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(56) default_function_kernel(float* __restrict__ compute, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 14) + (((int)threadIdx.x) >> 2)) < 1485) {
    compute[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))] = (1.000000e+00f / (1.000000e+00f + __expf((0.000000e+00f - data[((((int)blockIdx.x) * 56) + ((int)threadIdx.x))]))));
  }
}

