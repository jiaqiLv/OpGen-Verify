void default_function_kernel(float* T_batch_matmul_NN, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[135];
  for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
    for (int32_t ax5 = 0; ax5 < 9; ++ax5) {
      for (int32_t ax7 = 0; ax7 < 3; ++ax7) {
        auto_scheduler_layout_transform[(((ax3 * 27) + (ax5 * 3)) + ax7)] = ph_3[(((ax5 * 15) + (ax7 * 5)) + ax3)];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused = 0; b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused < 5; ++b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused) {
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 9; ++b_outer_inner_init) {
      for (int32_t i_inner_init = 0; i_inner_init < 7; ++i_inner_init) {
        T_batch_matmul_NN[(((b_outer_inner_init * 35) + (i_inner_init * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = 0.000000e+00f;
      }
    }
    for (int32_t b_outer_inner = 0; b_outer_inner < 9; ++b_outer_inner) {
      for (int32_t k_inner = 0; k_inner < 3; ++k_inner) {
        for (int32_t i_inner = 0; i_inner < 7; ++i_inner) {
          T_batch_matmul_NN[(((b_outer_inner * 35) + (i_inner * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] = (T_batch_matmul_NN[(((b_outer_inner * 35) + (i_inner * 5)) + b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused)] + (ph_0[(((b_outer_inner * 21) + (i_inner * 3)) + k_inner)] * auto_scheduler_layout_transform[(((b_outer_outer_outer_i_outer_outer_outer_fused_j_outer_outer_outer_fused_b_outer_outer_inner_fused_i_outer_outer_inner_fused_j_outer_outer_inner_fused * 27) + (b_outer_inner * 3)) + k_inner)]));
        }
      }
    }
  }
}

