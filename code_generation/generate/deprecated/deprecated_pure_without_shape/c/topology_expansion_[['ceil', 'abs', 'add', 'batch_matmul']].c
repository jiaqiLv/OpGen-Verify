void default_function_kernel(float* T_add, float* T_batch_matmul_NN, float* compute, float* ph_0, float* ph_5) {
  float auto_scheduler_layout_transform[120];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 120; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 120; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (fabsf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
      for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
        for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
          for (int32_t ax7 = 0; ax7 < 3; ++ax7) {
            auto_scheduler_layout_transform[(((((ax0_ax1_fused_ax2_fused_1 * 60) + (ax4 * 30)) + (ax5 * 15)) + (ax6 * 3)) + ax7)] = ph_5[(((((ax0_ax1_fused_ax2_fused_1 * 60) + (ax5 * 30)) + (ax4 * 15)) + (ax7 * 5)) + ax6)];
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 2; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
        for (int32_t i_inner_init = 0; i_inner_init < 5; ++i_inner_init) {
          T_batch_matmul_NN[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 50) + (b_outer_inner_init * 25)) + (i_inner_init * 5)) + j_outer_inner_init)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
        for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
          for (int32_t k_inner = 0; k_inner < 3; ++k_inner) {
            for (int32_t i_inner = 0; i_inner < 5; ++i_inner) {
              T_batch_matmul_NN[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 50) + (b_outer_inner * 25)) + (i_inner * 5)) + j_outer_inner)] = (T_batch_matmul_NN[((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 50) + (b_outer_inner * 25)) + (i_inner * 5)) + j_outer_inner)] + (ph_0[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 60) + (b_outer_inner * 30)) + (i_inner * 6)) + (k_outer * 3)) + k_inner)] * auto_scheduler_layout_transform[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 60) + (k_outer * 30)) + (b_outer_inner * 15)) + (j_outer_inner * 3)) + k_inner)]));
            }
          }
        }
      }
    }
  }
}

