
#if defined(__CUDA_ARCH__) && (__CUDA_ARCH__ < 700)
#define __shfl_sync(mask, var, lane, width) \
        __shfl((var), (lane), (width))

#define __shfl_down_sync(mask, var, offset, width) \
        __shfl_down((var), (offset), (width))

#define __shfl_up_sync(mask, var, offset, width) \
        __shfl_up((var), (offset), (width))
#endif


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
extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ data, float* __restrict__ data_red);
extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ data, float* __restrict__ data_red) {
  float normal_reduce_temp0[1];
  float red_buf0[1];
  normal_reduce_temp0[0] = 1.000000e+00f;
  for (int k0_k1_fused_k2_fused_k3_fused_outer = 0; k0_k1_fused_k2_fused_k3_fused_outer < 1617; ++k0_k1_fused_k2_fused_k3_fused_outer) {
    if (((k0_k1_fused_k2_fused_k3_fused_outer * 16) + (((int)threadIdx.x) >> 1)) < 25857) {
      normal_reduce_temp0[0] = (normal_reduce_temp0[0] * data[((k0_k1_fused_k2_fused_k3_fused_outer * 32) + ((int)threadIdx.x))]);
    }
  }
  uint mask[1];
  float t0[1];
  red_buf0[0] = normal_reduce_temp0[0];
  mask[0] = __activemask();
  t0[0] = __shfl_down_sync(mask[0], red_buf0[0], 16, 32);
  red_buf0[0] = (red_buf0[0] * t0[0]);
  t0[0] = __shfl_down_sync(mask[0], red_buf0[0], 8, 32);
  red_buf0[0] = (red_buf0[0] * t0[0]);
  t0[0] = __shfl_down_sync(mask[0], red_buf0[0], 4, 32);
  red_buf0[0] = (red_buf0[0] * t0[0]);
  t0[0] = __shfl_down_sync(mask[0], red_buf0[0], 2, 32);
  red_buf0[0] = (red_buf0[0] * t0[0]);
  t0[0] = __shfl_down_sync(mask[0], red_buf0[0], 1, 32);
  red_buf0[0] = (red_buf0[0] * t0[0]);
  red_buf0[0] = __shfl_sync(mask[0], red_buf0[0], 0, 32);
  if (((int)threadIdx.x) == 0) {
    data_red[0] = red_buf0[0];
  }
}

