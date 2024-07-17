extern "C" __global__ void __launch_bounds__(32) default_function_kernel_3(float* __restrict__ T_batch_matmul_NN, float* __restrict__ compute) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = acoshf(T_batch_matmul_NN[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(2) default_function_kernel_1(float* __restrict__ T_batch_matmul_NN, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  float T_batch_matmul_NN_local[24];
  __shared__ float T_mod_shared[192];
  for (int b_c_outer_inner_init = 0; b_c_outer_inner_init < 3; ++b_c_outer_inner_init) {
    for (int j_c_outer_inner_init = 0; j_c_outer_inner_init < 8; ++j_c_outer_inner_init) {
      T_batch_matmul_NN_local[((b_c_outer_inner_init * 8) + j_c_outer_inner_init)] = 0.000000e+00f;
    }
  }
  for (int ax0_ax1_fused_ax2_fused_outer_outer = 0; ax0_ax1_fused_ax2_fused_outer_outer < 96; ++ax0_ax1_fused_ax2_fused_outer_outer) {
    T_mod_shared[((ax0_ax1_fused_ax2_fused_outer_outer * 2) + ((int)threadIdx.x))] = fmodf(ph_0[((((((int)blockIdx.x) >> 2) * 192) + (ax0_ax1_fused_ax2_fused_outer_outer * 2)) + ((int)threadIdx.x))], ph_3[((((((int)blockIdx.x) >> 2) * 192) + (ax0_ax1_fused_ax2_fused_outer_outer * 2)) + ((int)threadIdx.x))]);
  }
  __syncthreads();
  for (int b_c_outer_inner = 0; b_c_outer_inner < 3; ++b_c_outer_inner) {
    for (int j_c_outer_inner = 0; j_c_outer_inner < 8; ++j_c_outer_inner) {
      for (int k_inner = 0; k_inner < 8; ++k_inner) {
        T_batch_matmul_NN_local[((b_c_outer_inner * 8) + j_c_outer_inner)] = (T_batch_matmul_NN_local[((b_c_outer_inner * 8) + j_c_outer_inner)] + (ph_0[((((((((int)blockIdx.x) >> 2) * 192) + (b_c_outer_inner * 64)) + ((((int)blockIdx.x) & 3) * 16)) + (((int)threadIdx.x) * 8)) + k_inner)] * T_mod_shared[(((b_c_outer_inner * 64) + (k_inner * 8)) + j_c_outer_inner)]));
      }
    }
  }
  for (int b_inner = 0; b_inner < 3; ++b_inner) {
    for (int j_inner = 0; j_inner < 8; ++j_inner) {
      T_batch_matmul_NN[((((((((int)blockIdx.x) >> 2) * 192) + (b_inner * 64)) + ((((int)blockIdx.x) & 3) * 16)) + (((int)threadIdx.x) * 8)) + j_inner)] = T_batch_matmul_NN_local[((b_inner * 8) + j_inner)];
    }
  }
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel(float* __restrict__ T_mod, float* __restrict__ ph_0, float* __restrict__ ph_3) {
  T_mod[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = fmodf(ph_0[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))], ph_3[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

extern "C" __global__ void __launch_bounds__(32) default_function_kernel_2(float* __restrict__ T_batch_matmul_NN, float* __restrict__ compute) {
  compute[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))] = atanf(T_batch_matmul_NN[((((int)blockIdx.x) * 32) + ((int)threadIdx.x))]);
}

