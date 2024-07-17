void default_function_kernel(float* T_batch_matmul_NN, float* compute, float* compute_1, float* ph_0, float* ph_7) {
  float auto_scheduler_layout_transform[34];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 680; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 680; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinf(acoshf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  for (int32_t ax5 = 0; ax5 < 2; ++ax5) {
    for (int32_t ax7 = 0; ax7 < 17; ++ax7) {
      auto_scheduler_layout_transform[((ax5 * 17) + ax7)] = ph_7[((ax5 * 17) + ax7)];
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 2; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 2; ++b_outer_inner_init) {
      for (int32_t i_outer_inner_init = 0; i_outer_inner_init < 2; ++i_outer_inner_init) {
        for (int32_t i_inner_init = 0; i_inner_init < 5; ++i_inner_init) {
          T_batch_matmul_NN[((((b_outer_inner_init * 20) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10)) + (i_outer_inner_init * 5)) + i_inner_init)] = 0.000000e+00f;
        }
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 2; ++b_outer_inner) {
      for (int32_t i_outer_inner = 0; i_outer_inner < 2; ++i_outer_inner) {
        for (int32_t k_inner = 0; k_inner < 17; ++k_inner) {
          for (int32_t i_inner = 0; i_inner < 5; ++i_inner) {
            T_batch_matmul_NN[((((b_outer_inner * 20) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10)) + (i_outer_inner * 5)) + i_inner)] = (T_batch_matmul_NN[((((b_outer_inner * 20) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 10)) + (i_outer_inner * 5)) + i_inner)] + ((ph_0[(((((b_outer_inner * 340) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 170)) + (i_outer_inner * 85)) + (i_inner * 17)) + k_inner)] * atanhf(ph_0[(((((b_outer_inner * 340) + (b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 170)) + (i_outer_inner * 85)) + (i_inner * 17)) + k_inner)])) * auto_scheduler_layout_transform[((b_outer_inner * 17) + k_inner)]));
          }
        }
      }
    }
  }
}

