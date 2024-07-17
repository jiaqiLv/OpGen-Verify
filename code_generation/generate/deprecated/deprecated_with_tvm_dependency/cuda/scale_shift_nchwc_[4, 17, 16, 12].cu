
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
extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(48) default_function_kernel(float* __restrict__ Scale, float* __restrict__ ScaleShift, float* __restrict__ Shift, float* __restrict__ data) {
  ScaleShift[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 48) + ((int)threadIdx.x))] * Scale[((((((int)blockIdx.x) % 136) / 68) * 17) + (((((int)blockIdx.x) * 14) + ((int)threadIdx.x)) % 17))]) + Shift[((((((int)blockIdx.x) % 136) / 68) * 17) + (((((int)blockIdx.x) * 14) + ((int)threadIdx.x)) % 17))]);
}

