void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3, float* ph_9) {
  float auto_scheduler_layout_transform[595];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1309; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1309; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 1309; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = ceilf(acosf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  for (int32_t ax6 = 0; ax6 < 5; ++ax6) {
    for (int32_t ax7 = 0; ax7 < 7; ++ax7) {
      for (int32_t ax8 = 0; ax8 < 17; ++ax8) {
        auto_scheduler_layout_transform[(((ax6 * 119) + (ax7 * 17)) + ax8)] = ph_9[(((ax8 * 35) + (ax7 * 5)) + ax6)];
      }
    }
  }
  for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 11; ++i_outer_inner_init) {
    for (int32_t j_outer_inner_init = 0; j_outer_inner_init < 5; ++j_outer_inner_init) {
      for (int32_t b_inner_init = 0; b_inner_init < 17; ++b_inner_init) {
        T_batch_matmul_NN[(((b_inner_init * 55) + (i_outer_inner_init * 5)) + j_outer_inner_init)] = 0.000000e+00f;
      }
    }
  }
  for (int32_t i_outer_inner = 0; i_outer_inner < 11; ++i_outer_inner) {
    for (int32_t j_outer_inner = 0; j_outer_inner < 5; ++j_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 7; ++k_inner) {
        for (int32_t b_inner = 0; b_inner < 17; ++b_inner) {
          T_batch_matmul_NN[(((b_inner * 55) + (i_outer_inner * 5)) + j_outer_inner)] = (T_batch_matmul_NN[(((b_inner * 55) + (i_outer_inner * 5)) + j_outer_inner)] + ((ph_0[(((b_inner * 77) + (i_outer_inner * 7)) + k_inner)] / ph_3[(((b_inner * 77) + (i_outer_inner * 7)) + k_inner)]) * auto_scheduler_layout_transform[(((j_outer_inner * 119) + (k_inner * 17)) + b_inner)]));
        }
      }
    }
  }
}

