
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
extern "C" __global__ void __launch_bounds__(57) default_function_kernel(float* __restrict__ T_fast_tanh, float* __restrict__ data);
extern "C" __global__ void __launch_bounds__(57) default_function_kernel(float* __restrict__ T_fast_tanh, float* __restrict__ data) {
  T_fast_tanh[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))] = ((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * -2.760768e-16f) + 2.000188e-13f)) + -8.604672e-11f)) + 5.122297e-08f)) + 1.485722e-05f)) + 6.372619e-04f)) + 4.893525e-03f)) / (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * (((max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))])) * max(-9.000000e+00f, min(9.000000e+00f, data[((((int)blockIdx.x) * 57) + ((int)threadIdx.x))]))) * 1.198258e-06f) + 1.185347e-04f)) + 2.268435e-03f)) + 4.893525e-03f));
}

