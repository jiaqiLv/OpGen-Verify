extern "C" __global__ void __launch_bounds__(32) default_function_kernel_1(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = asinhf(acoshf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]));
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ compute, float* __restrict__ ph_0) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acoshf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void default_function_kernel_2(float* __restrict__ T_add, float* __restrict__ ph_0) {
  T_add[((int)blockIdx.x)] = (acoshf(ph_0[((int)blockIdx.x)]) + ph_0[((int)blockIdx.x)]);
}

extern "C" __global__ void __launch_bounds__(25) default_function_kernel_3(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_3, float* __restrict__ ph_9) {
  float T_batch_matmul_NN_local[8];
  __shared__ float T_mod_shared[40];
  __shared__ float ph_9_shared[40];
  for (int b_c_inner_init = 0; b_c_inner_init < 8; ++b_c_inner_init) {
    T_batch_matmul_NN_local[b_c_inner_init] = 0.000000e+00f;
  }
  for (int k_outer_outer = 0; k_outer_outer < 4; ++k_outer_outer) {
    __syncthreads();
    for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 2; ++ax0_ax1_fused_ax2_fused_outer_outer) {
      if (((ax0_ax1_fused_ax2_fused_outer_outer * 5) + (((int)threadIdx.x) / 5)) < 8) {
        T_mod_shared[((ax0_ax1_fused_ax2_fused_outer_outer * 25) + ((int)threadIdx.x))] = fmodf(ph_0[(((ax0_ax1_fused_ax2_fused_outer_outer * 100) + (((int)threadIdx.x) * 4)) + k_outer_outer)], ph_3[(((ax0_ax1_fused_ax2_fused_outer_outer * 100) + (((int)threadIdx.x) * 4)) + k_outer_outer)]);
      }
    }
    for (int ax0_ax1_fused_ax2_fused_outer_outer_1 = 0; ax0_ax1_fused_ax2_fused_outer_outer_1 < 2; ++ax0_ax1_fused_ax2_fused_outer_outer_1) {
      if (((ax0_ax1_fused_ax2_fused_outer_outer_1 * 5) + (((int)threadIdx.x) / 5)) < 8) {
        ph_9_shared[((ax0_ax1_fused_ax2_fused_outer_outer_1 * 25) + ((int)threadIdx.x))] = ph_9[((((ax0_ax1_fused_ax2_fused_outer_outer_1 * 100) + ((((int)threadIdx.x) / 5) * 20)) + (k_outer_outer * 5)) + (((int)threadIdx.x) % 5))];
      }
    }
    __syncthreads();
    for (int b_c_inner = 0; b_c_inner < 8; ++b_c_inner) {
      T_batch_matmul_NN_local[b_c_inner] = (T_batch_matmul_NN_local[b_c_inner] + (T_mod_shared[((b_c_inner * 5) + (((int)threadIdx.x) / 5))] * ph_9_shared[((b_c_inner * 5) + (((int)threadIdx.x) % 5))]));
    }
  }
  for (int b_inner = 0; b_inner < 8; ++b_inner) {
    T_batch_matmul_NN[((b_inner * 25) + ((int)threadIdx.x))] = T_batch_matmul_NN_local[b_inner];
  }
}

