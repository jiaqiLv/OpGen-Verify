void default_function_kernel(float* T_batch_matmul_NN, float* ph_0) {
  float auto_scheduler_layout_transform[2880];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
      for (int32_t ax6 = 0; ax6 < 3; ++ax6) {
        for (int32_t ax7 = 0; ax7 < 3; ++ax7) {
          for (int32_t ax8 = 0; ax8 < 5; ++ax8) {
            auto_scheduler_layout_transform[(((((ax0_ax1_fused_ax2_fused * 180) + (ax4 * 45)) + (ax6 * 15)) + (ax7 * 5)) + ax8)] = ceilf(ph_0[(((((((ax0_ax1_fused_ax2_fused >> 2) * 720) + (ax8 * 144)) + (ax4 * 36)) + (ax7 * 12)) + ((ax0_ax1_fused_ax2_fused & 3) * 3)) + ax6)]);
          }
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 96; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 3; ++j_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 5; ++b_inner_init) {
        for (int32_t i_inner_init = 0; i_inner_init < 2; ++i_inner_init) {
          T_batch_matmul_NN[(((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 24) * 720) + (b_inner_init * 144)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 6) * 24)) + (i_inner_init * 12)) + (((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 24) / 6) * 3)) + j_outer_inner_init)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t k_outer = 0; k_outer < 4; ++k_outer) {
      for (int32_t j_outer_inner = 0; j_outer_inner < 3; ++j_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 3; ++k_inner) {
          for (int32_t b_inner = 0; b_inner < 5; ++b_inner) {
            for (int32_t i_inner = 0; i_inner < 2; ++i_inner) {
              T_batch_matmul_NN[(((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 24) * 720) + (b_inner * 144)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 6) * 24)) + (i_inner * 12)) + (((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 24) / 6) * 3)) + j_outer_inner)] = (T_batch_matmul_NN[(((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 24) * 720) + (b_inner * 144)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 6) * 24)) + (i_inner * 12)) + (((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 24) / 6) * 3)) + j_outer_inner)] + (ph_0[(((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 24) * 720) + (b_inner * 144)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused % 6) * 24)) + (i_inner * 12)) + (k_outer * 3)) + k_inner)] * auto_scheduler_layout_transform[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused / 6) * 180) + (k_outer * 45)) + (j_outer_inner * 15)) + (k_inner * 5)) + b_inner)]));
            }
          }
        }
      }
    }
  }
}

