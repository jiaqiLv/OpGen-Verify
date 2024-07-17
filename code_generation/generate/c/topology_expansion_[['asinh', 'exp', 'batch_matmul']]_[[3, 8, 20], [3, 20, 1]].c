void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* ph_0, float* ph_4) {
  float auto_scheduler_layout_transform[60];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 480; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax5 = 0; ax5 < 3; ++ax5) {
    for (int32_t ax7 = 0; ax7 < 20; ++ax7) {
      auto_scheduler_layout_transform[((ax5 * 20) + ax7)] = ph_4[((ax5 * 20) + ax7)];
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused < 4; ++b_outer_outer_outer_i_outer_outer_outer_fused) {
    float compute_1[120];
    for (int32_t i0 = 0; i0 < 3; ++i0) {
      for (int32_t i1 = 0; i1 < 2; ++i1) {
        for (int32_t i2 = 0; i2 < 20; ++i2) {
          compute_1[(((i0 * 40) + (i1 * 20)) + i2)] = expf(ph_0[((((i0 * 160) + (b_outer_outer_outer_i_outer_outer_outer_fused * 40)) + (i1 * 20)) + i2)]);
        }
      }
    }
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 3; ++b_outer_inner_init) {
      for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 2; ++i_outer_inner_init) {
        T_batch_matmul_NN[(((b_outer_inner_init * 8) + (b_outer_outer_outer_i_outer_outer_outer_fused * 2)) + i_outer_inner_init)] = 0.000000e+00f;
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 3; ++b_outer_inner) {
      for (int32_t i_outer_inner = 0; i_outer_inner < 2; ++i_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 20; ++k_inner) {
          T_batch_matmul_NN[(((b_outer_inner * 8) + (b_outer_outer_outer_i_outer_outer_outer_fused * 2)) + i_outer_inner)] = (T_batch_matmul_NN[(((b_outer_inner * 8) + (b_outer_outer_outer_i_outer_outer_outer_fused * 2)) + i_outer_inner)] + (compute_1[(((b_outer_inner * 40) + (i_outer_inner * 20)) + k_inner)] * auto_scheduler_layout_transform[((b_outer_inner * 20) + k_inner)]));
        }
      }
    }
  }
}

