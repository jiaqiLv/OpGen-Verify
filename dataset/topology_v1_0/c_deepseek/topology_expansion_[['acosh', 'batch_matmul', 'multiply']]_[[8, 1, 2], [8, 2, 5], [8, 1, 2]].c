void default_function_kernel(float* T_batch_matmul_NN, float* T_multiply, float* compute, float* ph_0, float* ph_3, float* ph_5) {
  float auto_scheduler_layout_transform[80];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
    for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
      for (int32_t ax8 = 0; ax8 < 8; ++ax8) {
        auto_scheduler_layout_transform[(((ax3 * 16) + (ax4 * 8)) + ax8)] = ph_3[(((ax8 * 10) + (ax4 * 5)) + ax3)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 5; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_inner_init = 0; b_inner_init < 8; ++b_inner_init) {
      T_batch_matmul_NN[((b_inner_init * 5) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
      for (int32_t b_inner = 0; b_inner < 8; ++b_inner) {
        T_batch_matmul_NN[((b_inner * 5) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[((b_inner * 5) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (ph_0[((b_inner * 2) + k_outer)] * auto_scheduler_layout_transform[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 16) + (k_outer * 8)) + b_inner)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_5[ax0_ax1_fused_ax2_fused]);
  }
}
