void default_function_kernel(float* T_batch_matmul_NN, float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_5) {
  float auto_scheduler_layout_transform[70];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 112; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
    for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
      for (int32_t ax8 = 0; ax8 < 7; ++ax8) {
        auto_scheduler_layout_transform[(((ax3 * 14) + (ax5 * 7)) + ax8)] = ph_3[(((ax5 * 35) + (ax8 * 5)) + ax3)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 5; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 8; ++i_outer_inner_init) {
        for (int32_t b_inner_init = 0; b_inner_init < 7; ++b_inner_init) {
          T_batch_matmul_NN[((((b_outer_inner_init * 280) + (b_inner_init * 40)) + (i_outer_inner_init * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t i_outer_inner = 0; i_outer_inner < 8; ++i_outer_inner) {
        for (int32_t b_inner = 0; b_inner < 7; ++b_inner) {
          T_batch_matmul_NN[((((b_outer_inner * 280) + (b_inner * 40)) + (i_outer_inner * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[((((b_outer_inner * 280) + (b_inner * 40)) + (i_outer_inner * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (ph_0[(((b_outer_inner * 56) + (b_inner * 8)) + i_outer_inner)] * auto_scheduler_layout_transform[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 14) + (b_outer_inner * 7)) + b_inner)]));
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 112; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_5[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 112; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf(ph_5[i0_i1_fused_i2_fused_1]);
  }
}

