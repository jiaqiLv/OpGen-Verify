
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
extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0);
extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 3)) < 9) {
    compute[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = __sinf((ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] + __cosf(ph_0[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))])));
  }
}

