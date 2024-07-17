extern "C" __global__ void __launch_bounds__(16) default_function_kernel(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_4) {
  float T_batch_matmul_NN_local[4];
  __shared__ float T_divide_shared[320];
  __shared__ float ph_4_shared[40];
  for (int i_c_outer_inner_init = 0; i_c_outer_inner_init < 2; ++i_c_outer_inner_init) {
    T_batch_matmul_NN_local[i_c_outer_inner_init] = 0.000000e+00f;
    T_batch_matmul_NN_local[(i_c_outer_inner_init + 2)] = 0.000000e+00f;
  }
  for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 20; ++ax0_ax1_fused_ax2_fused_outer_outer) {
    T_divide_shared[((ax0_ax1_fused_ax2_fused_outer_outer * 16) + ((int)threadIdx.x))] = (ph_0[((ax0_ax1_fused_ax2_fused_outer_outer * 16) + ((int)threadIdx.x))] / __cosf(ph_0[((ax0_ax1_fused_ax2_fused_outer_outer * 16) + ((int)threadIdx.x))]));
  }
  for (int ax0_ax1_fused_ax2_fused_outer_outer_1 = 0; ax0_ax1_fused_ax2_fused_outer_outer_1 < 2; ++ax0_ax1_fused_ax2_fused_outer_outer_1) {
    if (((ax0_ax1_fused_ax2_fused_outer_outer_1 * 4) + (((int)threadIdx.x) >> 2)) < 5) {
      *(float2*)(ph_4_shared + ((ax0_ax1_fused_ax2_fused_outer_outer_1 * 32) + (((int)threadIdx.x) * 2))) = *(float2*)(ph_4 + ((ax0_ax1_fused_ax2_fused_outer_outer_1 * 32) + (((int)threadIdx.x) * 2)));
    }
  }
  __syncthreads();
  for (int i_c_outer_inner = 0; i_c_outer_inner < 2; ++i_c_outer_inner) {
    for (int k_inner = 0; k_inner < 5; ++k_inner) {
      T_batch_matmul_NN_local[i_c_outer_inner] = (T_batch_matmul_NN_local[i_c_outer_inner] + (T_divide_shared[(((((((int)threadIdx.x) >> 1) * 40) + ((((int)threadIdx.x) & 1) * 10)) + (i_c_outer_inner * 5)) + k_inner)] * ph_4_shared[(((((int)threadIdx.x) >> 1) * 5) + k_inner)]));
      T_batch_matmul_NN_local[(i_c_outer_inner + 2)] = (T_batch_matmul_NN_local[(i_c_outer_inner + 2)] + (T_divide_shared[((((((((int)threadIdx.x) >> 1) * 40) + ((((int)threadIdx.x) & 1) * 10)) + (i_c_outer_inner * 5)) + k_inner) + 20)] * ph_4_shared[(((((int)threadIdx.x) >> 1) * 5) + k_inner)]));
    }
  }
  for (int i_inner = 0; i_inner < 2; ++i_inner) {
    T_batch_matmul_NN[((((((int)threadIdx.x) >> 1) * 8) + ((((int)threadIdx.x) & 1) * 2)) + i_inner)] = T_batch_matmul_NN_local[i_inner];
    T_batch_matmul_NN[(((((((int)threadIdx.x) >> 1) * 8) + ((((int)threadIdx.x) & 1) * 2)) + i_inner) + 4)] = T_batch_matmul_NN_local[(i_inner + 2)];
  }
}

