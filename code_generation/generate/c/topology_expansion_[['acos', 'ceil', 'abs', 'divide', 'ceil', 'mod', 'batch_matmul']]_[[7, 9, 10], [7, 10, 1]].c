void default_function_kernel(float* T_batch_matmul_NN, float* T_divide, float* T_mod, float* compute, float* ph_0, float* ph_8) {
  float auto_scheduler_layout_transform[70];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 630; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 630; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / fabsf(ceilf(ph_0[ax0_ax1_fused_ax2_fused])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 630; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod[ax0_ax1_fused_ax2_fused_1] = fmodf(ceilf(ph_0[ax0_ax1_fused_ax2_fused_1]), ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
    for (int32_t ax5 = 0; ax5 < 7; ++ax5) {
      for (int32_t ax7 = 0; ax7 < 5; ++ax7) {
        auto_scheduler_layout_transform[(((ax4 * 35) + (ax5 * 5)) + ax7)] = ph_8[(((ax5 * 10) + (ax4 * 5)) + ax7)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 3; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 7; ++b_outer_inner_init) {
      for (int32_t i_inner_init = 0; i_inner_init < 3; ++i_inner_init) {
        T_batch_matmul_NN[(((b_outer_inner_init * 9) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 3)) + i_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 7; ++b_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 5; ++k_inner) {
          for (int32_t i_inner = 0; i_inner < 3; ++i_inner) {
            T_batch_matmul_NN[(((b_outer_inner * 9) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 3)) + i_inner)] = (T_batch_matmul_NN[(((b_outer_inner * 9) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 3)) + i_inner)] + (ceilf(ph_0[(((((b_outer_inner * 90) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 30)) + (i_inner * 10)) + (k_outer * 5)) + k_inner)]) * auto_scheduler_layout_transform[(((k_outer * 35) + (b_outer_inner * 5)) + k_inner)]));
          }
        }
      }
    }
  }
}
