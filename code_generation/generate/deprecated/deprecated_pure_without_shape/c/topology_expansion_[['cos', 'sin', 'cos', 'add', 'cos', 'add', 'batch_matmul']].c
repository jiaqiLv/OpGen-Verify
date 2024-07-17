void default_function_kernel(float* T_add, float* T_add_1, float* T_batch_matmul_NN, float* compute, float* ph_0, float* ph_8) {
  float auto_scheduler_layout_transform[126];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1386; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1386; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + cosf(sinf(ph_0[ax0_ax1_fused_ax2_fused])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1386; ++ax0_ax1_fused_ax2_fused_1) {
    T_add_1[ax0_ax1_fused_ax2_fused_1] = (cosf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
    for (int32_t ax7 = 0; ax7 < 9; ++ax7) {
      for (int32_t ax8 = 0; ax8 < 7; ++ax8) {
        auto_scheduler_layout_transform[(((ax5 * 63) + (ax7 * 7)) + ax8)] = ph_8[(((ax5 * 63) + (ax8 * 9)) + ax7)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 11; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 7; ++b_inner_init) {
        T_batch_matmul_NN[(((b_outer_inner_init * 77) + (b_inner_init * 11)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 9; ++k_inner) {
        for (int32_t b_inner = 0; b_inner < 7; ++b_inner) {
          T_batch_matmul_NN[(((b_outer_inner * 77) + (b_inner * 11)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[(((b_outer_inner * 77) + (b_inner * 11)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (cosf(ph_0[((((b_outer_inner * 693) + (b_inner * 99)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 9)) + k_inner)]) * auto_scheduler_layout_transform[(((b_outer_inner * 63) + (k_inner * 7)) + b_inner)]));
        }
      }
    }
  }
}

