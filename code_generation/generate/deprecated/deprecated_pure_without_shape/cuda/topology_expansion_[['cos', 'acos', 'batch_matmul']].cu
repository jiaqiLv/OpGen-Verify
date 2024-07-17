extern "C" __global__ void __launch_bounds__(16) default_function_kernel_1(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_4) {
  float T_batch_matmul_NN_local[2];
  __shared__ float compute_shared[32];
  __shared__ float ph_4_shared[8];
  for (int b_c_outer_inner_init = 0; b_c_outer_inner_init < 2; ++b_c_outer_inner_init) {
    T_batch_matmul_NN_local[b_c_outer_inner_init] = 0.000000e+00f;
  }
  for (int k_outer_outer = 0; k_outer_outer < 5; ++k_outer_outer) {
    __syncthreads();
    for (int ax0_ax1_fused_ax2_fused_inner_s = 0; ax0_ax1_fused_ax2_fused_inner_s < 10; ++ax0_ax1_fused_ax2_fused_inner_s) {
      if (((((int)threadIdx.x) * 5) + (ax0_ax1_fused_ax2_fused_inner_s >> 1)) < 16) {
        if (((int)threadIdx.x) < 4) {
          compute_shared[((((int)threadIdx.x) * 10) + ax0_ax1_fused_ax2_fused_inner_s)] = acosf(ph_0[(((((((((int)threadIdx.x) * 5) + (ax0_ax1_fused_ax2_fused_inner_s >> 1)) >> 1) * 40) + (((int)blockIdx.x) * 20)) + ((((((int)threadIdx.x) * 2) + ax0_ax1_fused_ax2_fused_inner_s) & 3) * 5)) + k_outer_outer)]);
        }
      }
    }
    if (((int)threadIdx.x) < 8) {
      ph_4_shared[((int)threadIdx.x)] = ph_4[((((int)threadIdx.x) * 5) + k_outer_outer)];
    }
    __syncthreads();
    for (int b_c_outer_inner = 0; b_c_outer_inner < 2; ++b_c_outer_inner) {
      T_batch_matmul_NN_local[b_c_outer_inner] = (T_batch_matmul_NN_local[b_c_outer_inner] + (compute_shared[((((((int)threadIdx.x) >> 2) * 8) + (b_c_outer_inner * 4)) + (((int)threadIdx.x) & 3))] * ph_4_shared[(((((int)threadIdx.x) >> 2) * 2) + b_c_outer_inner)]));
    }
  }
  for (int b_inner = 0; b_inner < 2; ++b_inner) {
    T_batch_matmul_NN[(((((((int)threadIdx.x) >> 2) * 16) + (b_inner * 8)) + (((int)blockIdx.x) * 4)) + (((int)threadIdx.x) & 3))] = T_batch_matmul_NN_local[b_inner];
  }
}

extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = __cosf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}

