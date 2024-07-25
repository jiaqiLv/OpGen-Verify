void default_function_kernel(float* T_batch_matmul_NN, float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_7) {
  float auto_scheduler_layout_transform[70];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1400; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax4 = 0; ax4 < 5; ++ax4) {
    for (int32_t ax7 = 0; ax7 < 2; ++ax7) {
      for (int32_t ax8 = 0; ax8 < 7; ++ax8) {
        auto_scheduler_layout_transform[(((ax4 * 14) + (ax7 * 7)) + ax8)] = ph_7[(((ax8 * 10) + (ax4 * 2)) + ax7)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 20; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_inner_init = 0; b_inner_init < 7; ++b_inner_init) {
      T_batch_matmul_NN[((b_inner_init * 20) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 5; ++k_outer) {
      for (int32_t k_inner = 0; k_inner < 2; ++k_inner) {
        for (int32_t b_inner = 0; b_inner < 7; ++b_inner) {
          T_batch_matmul_NN[((b_inner * 20) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[((b_inner * 20) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (atanhf(ph_0[((((b_inner * 200) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10)) + (k_outer * 2)) + k_inner)]) * auto_scheduler_layout_transform[(((k_outer * 14) + (k_inner * 7)) + b_inner)]));
        }
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1400; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf((ph_0[i0_i1_fused_i2_fused_1] + ph_3[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1400; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
