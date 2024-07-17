void default_function_kernel(float* T_add, float* T_batch_matmul_NN, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_5) {
  float auto_scheduler_layout_transform[90];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 585; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]);
  }
  for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
    for (int32_t ax4 = 0; ax4 < 3; ++ax4) {
      for (int32_t ax8 = 0; ax8 < 15; ++ax8) {
        auto_scheduler_layout_transform[(((ax3 * 45) + (ax4 * 15)) + ax8)] = ph_5[(((ax8 * 6) + (ax4 * 2)) + ax3)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 2; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_inner_init = 0; b_inner_init < 15; ++b_inner_init) {
      for (int32_t i_inner_init = 0; i_inner_init < 13; ++i_inner_init) {
        T_batch_matmul_NN[(((b_inner_init * 26) + (i_inner_init * 2)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
      }
    }
    for (int32_t k_outer = 0; k_outer < 3; ++k_outer) {
      for (int32_t b_inner = 0; b_inner < 15; ++b_inner) {
        for (int32_t i_inner = 0; i_inner < 13; ++i_inner) {
          T_batch_matmul_NN[(((b_inner * 26) + (i_inner * 2)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[(((b_inner * 26) + (i_inner * 2)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (ph_0[(((b_inner * 39) + (i_inner * 3)) + k_outer)] * auto_scheduler_layout_transform[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 45) + (k_outer * 15)) + b_inner)]));
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 585; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 585; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = cosf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}

