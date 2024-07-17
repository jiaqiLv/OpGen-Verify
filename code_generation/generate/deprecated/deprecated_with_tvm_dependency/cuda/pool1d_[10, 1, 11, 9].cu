
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
extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max);
extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 1)) < 25) {
    pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = -3.402823e+38f;
  }
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    if (((((int)blockIdx.x) * 8) + (((int)threadIdx.x) >> 1)) < 25) {
      pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 16) + ((int)threadIdx.x))], (((1 <= ((((((int)blockIdx.x) + ((int)threadIdx.x)) % 5) * 2) + rv0)) && (((rv0 >> 1) + ((((int)blockIdx.x) + ((int)threadIdx.x)) % 5)) < 5)) ? data[(((((((((int)blockIdx.x) * 16) + ((int)threadIdx.x)) / 5) * 9) + (((((int)blockIdx.x) + ((int)threadIdx.x)) % 5) * 2)) + rv0) - 1)] : -3.402823e+38f));
    }
  }
}

