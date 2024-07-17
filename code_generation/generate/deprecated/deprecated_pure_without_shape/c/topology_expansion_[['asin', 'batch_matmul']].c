void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[180];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 36; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
      for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
        for (int32_t ax7 = 0; ax7 < 6; ++ax7) {
          auto_scheduler_layout_transform[((((ax0_ax1_fused_ax2_fused * 60) + (ax5 * 30)) + (ax6 * 6)) + ax7)] = ph_3[((((ax0_ax1_fused_ax2_fused * 60) + (ax5 * 30)) + (ax7 * 5)) + ax6)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 3; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        T_batch_matmul_NN[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10) + (b_outer_inner_init * 5)) + j_outer_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 6; ++k_inner) {
          T_batch_matmul_NN[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10) + (b_outer_inner * 5)) + j_outer_inner)] = (T_batch_matmul_NN[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10) + (b_outer_inner * 5)) + j_outer_inner)] + (ph_0[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 12) + (b_outer_inner * 6)) + k_inner)] * auto_scheduler_layout_transform[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 60) + (b_outer_inner * 30)) + (j_outer_inner * 6)) + k_inner)]));
        }
      }
    }
  }
}

