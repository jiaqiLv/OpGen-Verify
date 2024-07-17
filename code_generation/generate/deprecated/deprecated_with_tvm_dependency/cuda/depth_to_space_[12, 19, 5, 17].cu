
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
extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space);
extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ data, float* __restrict__ depth_to_space) {
  depth_to_space[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = data[(((((((((((int)blockIdx.x) * 4) + (((int)threadIdx.x) >> 4)) / 85) * 1615) + ((((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) % 170) / 17) % 2) * 680)) + (((((((int)blockIdx.x) * 30) + ((int)threadIdx.x)) % 34) % 2) * 340)) + (((((((int)blockIdx.x) * 16) + (((int)threadIdx.x) >> 2)) % 340) / 85) * 85)) + ((((((((int)blockIdx.x) * 32) + (((int)threadIdx.x) >> 1)) % 170) / 17) / 2) * 17)) + ((((((int)blockIdx.x) * 30) + ((int)threadIdx.x)) % 34) / 2))];
}

