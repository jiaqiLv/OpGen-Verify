
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
extern "C" __global__ void __launch_bounds__(4) default_function_kernel(int* __restrict__ T_shape);
extern "C" __global__ void __launch_bounds__(4) default_function_kernel(int* __restrict__ T_shape) {
  T_shape[((int)threadIdx.x)] = ((((int)threadIdx.x) == 3) ? 1 : ((((int)threadIdx.x) == 2) ? 2 : ((((int)threadIdx.x) == 1) ? 15 : 16)));
}

