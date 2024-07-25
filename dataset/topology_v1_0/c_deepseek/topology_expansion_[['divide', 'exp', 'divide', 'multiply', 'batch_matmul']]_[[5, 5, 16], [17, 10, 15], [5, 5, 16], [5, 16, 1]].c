void default_function_kernel(float* T_batch_matmul_NN, float* T_divide, float* T_multiply, float* ph_0, float* ph_3, float* ph_8) {
  float compute[400];
  float auto_scheduler_layout_transform[80];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 400; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 400; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 400; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply[ax0_ax1_fused_ax2_fused_1] = ((ph_0[ax0_ax1_fused_ax2_fused_1] / compute[ax0_ax1_fused_ax2_fused_1]) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  for (int32_t ax4 = 0; ax4 < 8; ++ax4) {
    for (int32_t ax7 = 0; ax7 < 2; ++ax7) {
      for (int32_t ax8 = 0; ax8 < 5; ++ax8) {
        auto_scheduler_layout_transform[(((ax4 * 10) + (ax7 * 5)) + ax8)] = ph_8[(((ax8 * 16) + (ax4 * 2)) + ax7)];
      }
    }
  }
  for (int32_t b_inner_init = 0; b_inner_init < 5; ++b_inner_init) {
    for (int32_t i_inner_init = 0; i_inner_init < 5; ++i_inner_init) {
      T_batch_matmul_NN[((b_inner_init * 5) + i_inner_init)] = 0.000000e+00f;
    }
  }
  for (int32_t k_outer = 0; k_outer < 8; ++k_outer) {
    for (int32_t k_inner = 0; k_inner < 2; ++k_inner) {
      for (int32_t b_inner = 0; b_inner < 5; ++b_inner) {
        for (int32_t i_inner = 0; i_inner < 5; ++i_inner) {
          T_batch_matmul_NN[((b_inner * 5) + i_inner)] = (T_batch_matmul_NN[((b_inner * 5) + i_inner)] + ((ph_0[((((b_inner * 80) + (i_inner * 16)) + (k_outer * 2)) + k_inner)] / compute[((((b_inner * 80) + (i_inner * 16)) + (k_outer * 2)) + k_inner)]) * auto_scheduler_layout_transform[(((k_outer * 10) + (k_inner * 5)) + b_inner)]));
        }
      }
    }
  }
}

