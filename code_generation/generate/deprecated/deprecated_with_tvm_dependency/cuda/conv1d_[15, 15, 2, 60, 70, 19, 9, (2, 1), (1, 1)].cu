
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
extern "C" __global__ void __launch_bounds__(20) default_function_kernel(float* __restrict__ conv1d_ncw, float* __restrict__ data, float* __restrict__ kernel);
extern "C" __global__ void __launch_bounds__(20) default_function_kernel(float* __restrict__ conv1d_ncw, float* __restrict__ data, float* __restrict__ kernel) {
  float conv1d_ncw_local[1];
  __shared__ float pad_temp_shared[10];
  __shared__ float kernel_shared[15];
  conv1d_ncw_local[0] = 0.000000e+00f;
  for (int rc_outer_outer = 0; rc_outer_outer < 3; ++rc_outer_outer) {
    __syncthreads();
    if (((int)threadIdx.x) < 10) {
      pad_temp_shared[((int)threadIdx.x)] = data[(((((((int)threadIdx.x) / 5) * 30) + (rc_outer_outer * 10)) + (((int)blockIdx.x) * 4)) + (((int)threadIdx.x) % 5))];
    }
    if (((int)threadIdx.x) < 15) {
      kernel_shared[((int)threadIdx.x)] = kernel[((((((int)threadIdx.x) / 3) * 9) + (rc_outer_outer * 3)) + (((int)threadIdx.x) % 3))];
    }
    __syncthreads();
    for (int ry_inner = 0; ry_inner < 3; ++ry_inner) {
      conv1d_ncw_local[0] = (conv1d_ncw_local[0] + (pad_temp_shared[((((((int)threadIdx.x) / 10) * 5) + ((((int)threadIdx.x) & 1) * 2)) + ry_inner)] * kernel_shared[((((((int)threadIdx.x) % 10) >> 1) * 3) + ry_inner)]));
    }
  }
  conv1d_ncw[((((((int)threadIdx.x) >> 1) * 4) + (((int)blockIdx.x) * 2)) + (((int)threadIdx.x) & 1))] = conv1d_ncw_local[0];
}

