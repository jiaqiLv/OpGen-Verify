void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* ph_0, float* ph_4) {
  float auto_scheduler_layout_transform[96];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 960; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
    for (int32_t ax7 = 0; ax7 < 8; ++ax7) {
      for (int32_t ax8 = 0; ax8 < 6; ++ax8) {
        auto_scheduler_layout_transform[(((ax4 * 48) + (ax7 * 6)) + ax8)] = ph_4[(((ax8 * 16) + (ax4 * 8)) + ax7)];
      }
    }
  }
  for (int32_t b_inner_init = 0; b_inner_init < 6; ++b_inner_init) {
    for (int32_t i_inner_init = 0; i_inner_init < 10; ++i_inner_init) {
      T_batch_matmul_NN[((b_inner_init * 10) + i_inner_init)] = 0.000000e+00f;
    }
  }
  for (int32_t k_outer = 0; k_outer < 2; ++k_outer) {
    for (int32_t k_inner = 0; k_inner < 8; ++k_inner) {
      for (int32_t b_inner = 0; b_inner < 6; ++b_inner) {
        for (int32_t i_inner = 0; i_inner < 10; ++i_inner) {
          T_batch_matmul_NN[((b_inner * 10) + i_inner)] = (T_batch_matmul_NN[((b_inner * 10) + i_inner)] + (acosf(ph_0[((((b_inner * 160) + (i_inner * 16)) + (k_outer * 8)) + k_inner)]) * auto_scheduler_layout_transform[(((k_outer * 48) + (k_inner * 6)) + b_inner)]));
        }
      }
    }
  }
}

