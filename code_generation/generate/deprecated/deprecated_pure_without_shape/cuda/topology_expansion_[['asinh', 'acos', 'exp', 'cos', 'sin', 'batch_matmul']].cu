extern "C" __global__ void __launch_bounds__(64) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))] = asinhf(ph_0[((((int)blockIdx.x) * 64) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __cosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(4) default_function_kernel_3(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_7) {
  float T_batch_matmul_NN_local[16];
  __shared__ float compute_shared[64];
  __shared__ float ph_7_shared[8];
  for (int i_c_outer_inner_init = 0; i_c_outer_inner_init < 2; ++i_c_outer_inner_init) {
    for (int b_c_inner_init = 0; b_c_inner_init < 4; ++b_c_inner_init) {
      for (int i_c_inner_init = 0; i_c_inner_init < 2; ++i_c_inner_init) {
        T_batch_matmul_NN_local[(((b_c_inner_init * 4) + (i_c_outer_inner_init * 2)) + i_c_inner_init)] = 0.000000e+00f;
      }
    }
  }
  for (int k_outer_outer = 0; k_outer_outer < 5; ++k_outer_outer) {
    __syncthreads();
    for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 16; ++ax0_ax1_fused_ax2_fused_outer_outer) {
      compute_shared[((ax0_ax1_fused_ax2_fused_outer_outer * 4) + ((int)threadIdx.x))] = __sinf(ph_0[(((ax0_ax1_fused_ax2_fused_outer_outer * 20) + (((int)threadIdx.x) * 5)) + k_outer_outer)]);
    }
    for (int ax0_ax1_fused_ax2_fused_outer_outer_1 = 0; ax0_ax1_fused_ax2_fused_outer_outer_1 < 2; ++ax0_ax1_fused_ax2_fused_outer_outer_1) {
      ph_7_shared[((ax0_ax1_fused_ax2_fused_outer_outer_1 * 4) + ((int)threadIdx.x))] = ph_7[(((ax0_ax1_fused_ax2_fused_outer_outer_1 * 20) + (((int)threadIdx.x) * 5)) + k_outer_outer)];
    }
    __syncthreads();
    for (int i_c_outer_inner = 0; i_c_outer_inner < 2; ++i_c_outer_inner) {
      for (int b_c_inner = 0; b_c_inner < 4; ++b_c_inner) {
        for (int i_c_inner = 0; i_c_inner < 2; ++i_c_inner) {
          T_batch_matmul_NN_local[(((b_c_inner * 4) + (i_c_outer_inner * 2)) + i_c_inner)] = (T_batch_matmul_NN_local[(((b_c_inner * 4) + (i_c_outer_inner * 2)) + i_c_inner)] + (compute_shared[((((((((int)threadIdx.x) >> 1) * 32) + (b_c_inner * 8)) + ((((int)threadIdx.x) & 1) * 4)) + (i_c_outer_inner * 2)) + i_c_inner)] * ph_7_shared[(((((int)threadIdx.x) >> 1) * 4) + b_c_inner)]));
        }
      }
    }
  }
  for (int b_inner = 0; b_inner < 4; ++b_inner) {
    for (int i_inner = 0; i_inner < 4; ++i_inner) {
      T_batch_matmul_NN[(((((((int)threadIdx.x) >> 1) * 32) + (b_inner * 8)) + ((((int)threadIdx.x) & 1) * 4)) + i_inner)] = T_batch_matmul_NN_local[((b_inner * 4) + i_inner)];
    }
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = __expf(acosf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

