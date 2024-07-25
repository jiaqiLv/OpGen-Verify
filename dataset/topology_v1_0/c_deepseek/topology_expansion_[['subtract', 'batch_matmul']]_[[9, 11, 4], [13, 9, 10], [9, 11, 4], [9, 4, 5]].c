void default_function_kernel(float* T_batch_matmul_NN, float* T_subtract, float* ph_0, float* ph_3, float* ph_5) {
  float auto_scheduler_layout_transform[180];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 396; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]);
  }
  for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
    for (int32_t ax7 = 0; ax7 < 4; ++ax7) {
      for (int32_t ax8 = 0; ax8 < 9; ++ax8) {
        auto_scheduler_layout_transform[(((ax6 * 36) + (ax7 * 9)) + ax8)] = ph_5[(((ax8 * 20) + (ax7 * 5)) + ax6)];
      }
    }
  }
  for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 11; ++i_outer_inner_init) {
    for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 9; ++b_inner_init) {
        T_batch_matmul_NN[(((b_inner_init * 55) + (i_outer_inner_init * 5)) + j_outer_inner_init)] = 0.000000e+00f;
      }
    }
  }
  for (int32_t i_outer_inner = 0; i_outer_inner < 11; ++i_outer_inner) {
    for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 4; ++k_inner) {
        for (int32_t b_inner = 0; b_inner < 9; ++b_inner) {
          T_batch_matmul_NN[(((b_inner * 55) + (i_outer_inner * 5)) + j_outer_inner)] = (T_batch_matmul_NN[(((b_inner * 55) + (i_outer_inner * 5)) + j_outer_inner)] + (ph_0[(((b_inner * 44) + (i_outer_inner * 4)) + k_inner)] * auto_scheduler_layout_transform[(((j_outer_inner * 36) + (k_inner * 9)) + b_inner)]));
        }
      }
    }
  }
}

