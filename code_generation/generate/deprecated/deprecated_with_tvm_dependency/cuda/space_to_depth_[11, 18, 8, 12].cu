
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
extern "C" __global__ void __launch_bounds__(54) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth);
extern "C" __global__ void __launch_bounds__(54) default_function_kernel(float* __restrict__ data, float* __restrict__ space_to_depth) {
  space_to_depth[((((int)blockIdx.x) * 54) + ((int)threadIdx.x))] = data[(((((((((int)blockIdx.x) >> 7) * 6912) + ((((((((int)blockIdx.x) & 127) * 9) + (((int)threadIdx.x) / 6)) >> 4) % 18) * 384)) + (((((((int)blockIdx.x) * 9) + (((int)threadIdx.x) / 6)) & 15) >> 1) * 48)) + ((((((((int)blockIdx.x) & 127) * 9) + (((int)threadIdx.x) / 6)) >> 4) / 36) * 24)) + ((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) % 12) * 2)) + ((((((((int)blockIdx.x) & 127) * 9) + (((int)threadIdx.x) / 6)) >> 4) % 36) / 18))];
}

