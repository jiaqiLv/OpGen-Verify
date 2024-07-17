
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
extern "C" __global__ void __launch_bounds__(5) default_function_kernel(float* __restrict__ conv1d_ncw, float* __restrict__ data, float* __restrict__ kernel);
extern "C" __global__ void __launch_bounds__(5) default_function_kernel(float* __restrict__ conv1d_ncw, float* __restrict__ data, float* __restrict__ kernel) {
  float conv1d_ncw_local[8];
  __shared__ float pad_temp_shared[54];
  __shared__ float kernel_shared[45];
  conv1d_ncw_local[0] = 0.000000e+00f;
  conv1d_ncw_local[4] = 0.000000e+00f;
  conv1d_ncw_local[1] = 0.000000e+00f;
  conv1d_ncw_local[5] = 0.000000e+00f;
  conv1d_ncw_local[2] = 0.000000e+00f;
  conv1d_ncw_local[6] = 0.000000e+00f;
  conv1d_ncw_local[3] = 0.000000e+00f;
  conv1d_ncw_local[7] = 0.000000e+00f;
  pad_temp_shared[((int)threadIdx.x)] = data[((int)threadIdx.x)];
  pad_temp_shared[(((int)threadIdx.x) + 5)] = data[((((((int)threadIdx.x) + 5) / 9) * 10) + ((((int)threadIdx.x) + 5) % 9))];
  pad_temp_shared[(((int)threadIdx.x) + 10)] = data[(((((((int)threadIdx.x) + 10) / 9) * 10) + ((int)threadIdx.x)) + 1)];
  pad_temp_shared[(((int)threadIdx.x) + 15)] = data[((((((int)threadIdx.x) + 15) / 9) * 10) + ((((int)threadIdx.x) + 6) % 9))];
  pad_temp_shared[(((int)threadIdx.x) + 20)] = data[(((((((int)threadIdx.x) + 20) / 9) * 10) + ((int)threadIdx.x)) + 2)];
  pad_temp_shared[(((int)threadIdx.x) + 25)] = data[((((((int)threadIdx.x) + 25) / 9) * 10) + ((((int)threadIdx.x) + 7) % 9))];
  pad_temp_shared[(((int)threadIdx.x) + 30)] = data[(((((((int)threadIdx.x) + 30) / 9) * 10) + ((int)threadIdx.x)) + 3)];
  pad_temp_shared[(((int)threadIdx.x) + 35)] = data[((((((int)threadIdx.x) + 35) / 9) * 10) + ((((int)threadIdx.x) + 8) % 9))];
  pad_temp_shared[(((int)threadIdx.x) + 40)] = data[(((((((int)threadIdx.x) + 40) / 9) * 10) + ((int)threadIdx.x)) + 4)];
  pad_temp_shared[(((int)threadIdx.x) + 45)] = data[(((int)threadIdx.x) + 50)];
  if (((int)threadIdx.x) < 4) {
    pad_temp_shared[(((int)threadIdx.x) + 50)] = data[(((((((int)threadIdx.x) + 50) / 9) * 10) + ((int)threadIdx.x)) + 5)];
  }
  kernel_shared[((int)threadIdx.x)] = kernel[((int)threadIdx.x)];
  kernel_shared[(((int)threadIdx.x) + 5)] = kernel[(((int)threadIdx.x) + 5)];
  kernel_shared[(((int)threadIdx.x) + 10)] = kernel[(((int)threadIdx.x) + 10)];
  kernel_shared[(((int)threadIdx.x) + 15)] = kernel[(((int)threadIdx.x) + 15)];
  kernel_shared[(((int)threadIdx.x) + 20)] = kernel[(((int)threadIdx.x) + 20)];
  kernel_shared[(((int)threadIdx.x) + 25)] = kernel[(((int)threadIdx.x) + 25)];
  kernel_shared[(((int)threadIdx.x) + 30)] = kernel[(((int)threadIdx.x) + 30)];
  kernel_shared[(((int)threadIdx.x) + 35)] = kernel[(((int)threadIdx.x) + 35)];
  kernel_shared[(((int)threadIdx.x) + 40)] = kernel[(((int)threadIdx.x) + 40)];
  __syncthreads();
  for (int rc_outer_inner = 0; rc_outer_inner < 3; ++rc_outer_inner) {
    for (int ry_inner = 0; ry_inner < 3; ++ry_inner) {
      conv1d_ncw_local[0] = (conv1d_ncw_local[0] + (pad_temp_shared[((rc_outer_inner * 9) + ry_inner)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[4] = (conv1d_ncw_local[4] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 4)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[1] = (conv1d_ncw_local[1] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 2)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[5] = (conv1d_ncw_local[5] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 6)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[2] = (conv1d_ncw_local[2] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 27)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[6] = (conv1d_ncw_local[6] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 31)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[3] = (conv1d_ncw_local[3] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 29)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
      conv1d_ncw_local[7] = (conv1d_ncw_local[7] + (pad_temp_shared[(((rc_outer_inner * 9) + ry_inner) + 33)] * kernel_shared[(((((int)threadIdx.x) * 9) + (rc_outer_inner * 3)) + ry_inner)]));
    }
  }
  for (int nn_inner = 0; nn_inner < 2; ++nn_inner) {
    for (int yy_inner = 0; yy_inner < 2; ++yy_inner) {
      conv1d_ncw[(((nn_inner * 20) + (((int)threadIdx.x) * 4)) + yy_inner)] = conv1d_ncw_local[((nn_inner * 2) + yy_inner)];
      conv1d_ncw[((((nn_inner * 20) + (((int)threadIdx.x) * 4)) + yy_inner) + 2)] = conv1d_ncw_local[(((nn_inner * 2) + yy_inner) + 4)];
    }
  }
}

