
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
extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ data, float* __restrict__ resize);
extern "C" __global__ void __launch_bounds__(36) default_function_kernel(float* __restrict__ data, float* __restrict__ resize) {
  resize[((((int)blockIdx.x) * 36) + ((int)threadIdx.x))] = data[((((((((int)blockIdx.x) * 9) + (((int)threadIdx.x) >> 2)) / 224) * 224) + ((((((((int)blockIdx.x) * 9) + (((int)threadIdx.x) >> 2)) % 224) >> 2) / 2) * 8)) + ((((((int)blockIdx.x) * 4) + ((int)threadIdx.x)) & 15) / 2))];
}

