void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* ph_0, float* ph_8) {
  float auto_scheduler_layout_transform[119];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1785; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(fmodf(ph_0[i0_i1_fused_i2_fused], (ph_0[i0_i1_fused_i2_fused] + ((ph_0[i0_i1_fused_i2_fused] * fabsf(ph_0[i0_i1_fused_i2_fused])) / ph_0[i0_i1_fused_i2_fused]))));
  }
  for (int32_t ax4 = 0; ax4 < 7; ++ax4) {
    for (int32_t ax8 = 0; ax8 < 17; ++ax8) {
      auto_scheduler_layout_transform[((ax4 * 17) + ax8)] = ph_8[((ax8 * 7) + ax4)];
    }
  }
  for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 5; ++i_outer_inner_init) {
    for (int32_t b_inner_init = 0; b_inner_init < 17; ++b_inner_init) {
      for (int32_t i_inner_init = 0; i_inner_init < 3; ++i_inner_init) {
        T_batch_matmul_NN[(((b_inner_init * 15) + (i_outer_inner_init * 3)) + i_inner_init)] = 0.000000e+00f;
      }
    }
  }
  for (int32_t k_outer = 0; k_outer < 7; ++k_outer) {
    for (int32_t i_outer_inner = 0; i_outer_inner < 5; ++i_outer_inner) {
      for (int32_t b_inner = 0; b_inner < 17; ++b_inner) {
        for (int32_t i_inner = 0; i_inner < 3; ++i_inner) {
          T_batch_matmul_NN[(((b_inner * 15) + (i_outer_inner * 3)) + i_inner)] = (T_batch_matmul_NN[(((b_inner * 15) + (i_outer_inner * 3)) + i_inner)] + (fmodf(ph_0[((((b_inner * 105) + (i_outer_inner * 21)) + (i_inner * 7)) + k_outer)], (ph_0[((((b_inner * 105) + (i_outer_inner * 21)) + (i_inner * 7)) + k_outer)] + ((ph_0[((((b_inner * 105) + (i_outer_inner * 21)) + (i_inner * 7)) + k_outer)] * fabsf(ph_0[((((b_inner * 105) + (i_outer_inner * 21)) + (i_inner * 7)) + k_outer)])) / ph_0[((((b_inner * 105) + (i_outer_inner * 21)) + (i_inner * 7)) + k_outer)]))) * auto_scheduler_layout_transform[((k_outer * 17) + b_inner)]));
        }
      }
    }
  }
}

