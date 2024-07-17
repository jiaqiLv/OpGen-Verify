
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
extern "C" __global__ void __launch_bounds__(63) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(63) default_function_kernel(float* __restrict__ MirrorPadInput, float* __restrict__ data) {
  if (((((int)blockIdx.x) * 21) + (((int)threadIdx.x) / 3)) < 85) {
    MirrorPadInput[((((int)blockIdx.x) * 63) + ((int)threadIdx.x))] = data[((((221 <= ((((int)blockIdx.x) * 63) + ((int)threadIdx.x))) ? (24 - (((((int)blockIdx.x) * 63) + ((int)threadIdx.x)) / 17)) : ((((((int)blockIdx.x) * 63) + ((int)threadIdx.x)) < 17) ? 0 : ((((((int)blockIdx.x) * 63) + ((int)threadIdx.x)) / 17) - 1))) * 14) + (((((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) % 17) == 16) ? (29 - (((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) % 17)) : (((((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) % 17) < 2) ? (1 - (((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) % 17)) : ((((((int)blockIdx.x) * 12) + ((int)threadIdx.x)) % 17) - 2))))];
  }
}

