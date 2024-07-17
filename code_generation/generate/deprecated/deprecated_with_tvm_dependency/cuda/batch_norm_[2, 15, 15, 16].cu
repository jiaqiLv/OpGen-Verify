
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
extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var);
extern "C" __global__ void __launch_bounds__(60) default_function_kernel(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ moving_mean, float* __restrict__ moving_var) {
  T_divide[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] = ((data[((((int)blockIdx.x) * 60) + ((int)threadIdx.x))] - moving_mean[((((int)blockIdx.x) % 60) >> 2)]) / sqrtf((moving_var[((((int)blockIdx.x) % 60) >> 2)] + 1.000000e-05f)));
}

