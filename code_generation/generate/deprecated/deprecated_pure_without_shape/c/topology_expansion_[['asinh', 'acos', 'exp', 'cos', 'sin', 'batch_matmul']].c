void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_7) {
  float auto_scheduler_layout_transform[88];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 176; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 176; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = expf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 176; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = cosf(ph_0[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
      for (int32_t ax7 = 0; ax7 < 11; ++ax7) {
        for (int32_t ax8 = 0; ax8 < 2; ++ax8) {
          auto_scheduler_layout_transform[((((ax0_ax1_fused_ax2_fused * 44) + (ax5 * 22)) + (ax7 * 2)) + ax8)] = ph_7[((((ax0_ax1_fused_ax2_fused * 44) + (ax5 * 22)) + (ax8 * 11)) + ax7)];
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 4; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 2; ++b_inner_init) {
        T_batch_matmul_NN[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 8) + (b_outer_inner_init * 4)) + (b_inner_init * 2)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1))] = 0.000000e+00f;
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 11; ++k_inner) {
        for (int32_t b_inner = 0; b_inner < 2; ++b_inner) {
          T_batch_matmul_NN[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 8) + (b_outer_inner * 4)) + (b_inner * 2)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1))] = (T_batch_matmul_NN[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 8) + (b_outer_inner * 4)) + (b_inner * 2)) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1))] + (sinf(ph_0[((((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 88) + (b_outer_inner * 44)) + (b_inner * 22)) + ((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused >> 1) * 11)) + k_inner)]) * auto_scheduler_layout_transform[(((((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused & 1) * 44) + (b_outer_inner * 22)) + (k_inner * 2)) + b_inner)]));
        }
      }
    }
  }
}

