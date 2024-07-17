
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
extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max);
extern "C" __global__ void __launch_bounds__(30) default_function_kernel(float* __restrict__ data, float* __restrict__ pool_max) {
  pool_max[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = -3.402823e+38f;
  for (int rv0 = 0; rv0 < 3; ++rv0) {
    for (int rv1 = 0; rv1 < 3; ++rv1) {
      for (int rv2 = 0; rv2 < 3; ++rv2) {
        pool_max[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))] = max(pool_max[((((int)blockIdx.x) * 30) + ((int)threadIdx.x))], ((((1 <= ((((((((int)blockIdx.x) & 15) * 3) + (((int)threadIdx.x) / 10)) >> 3) * 2) + rv0)) && (1 <= ((((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) % 40) >> 2) * 2) + rv1))) && (1 <= (((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) & 7) * 2) + rv2))) ? data[((((((((((((int)blockIdx.x) * 3) + (((int)threadIdx.x) / 10)) >> 3) * 640) + (rv0 * 320)) + (((((((int)blockIdx.x) * 15) + (((int)threadIdx.x) >> 1)) % 40) >> 2) * 32)) + (rv1 * 16)) + ((((((int)blockIdx.x) * 6) + ((int)threadIdx.x)) & 7) * 2)) + rv2) - 337)] : -3.402823e+38f));
      }
    }
  }
}

