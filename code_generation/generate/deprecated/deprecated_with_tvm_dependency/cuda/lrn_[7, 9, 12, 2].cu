
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
extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ tensor);
extern "C" __global__ void __launch_bounds__(21) default_function_kernel(float* __restrict__ data, float* __restrict__ tensor);
extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ T_divide, float* __restrict__ data, float* __restrict__ tensor) {
  if (((((int)blockIdx.x) * 2) + (((int)threadIdx.x) >> 3)) < 189) {
    T_divide[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = (data[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] / powf((2.000000e+00f + (1.000000e-04f * tensor[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))])), 7.500000e-01f));
  }
}

extern "C" __global__ void __launch_bounds__(21) default_function_kernel(float* __restrict__ data, float* __restrict__ tensor) {
  tensor[((((int)blockIdx.x) * 21) + ((int)threadIdx.x))] = 0.000000e+00f;
  tensor[((((int)blockIdx.x) * 21) + ((int)threadIdx.x))] = (tensor[((((int)blockIdx.x) * 21) + ((int)threadIdx.x))] + (data[((((int)blockIdx.x) * 21) + ((int)threadIdx.x))] * data[((((int)blockIdx.x) * 21) + ((int)threadIdx.x))]));
}

