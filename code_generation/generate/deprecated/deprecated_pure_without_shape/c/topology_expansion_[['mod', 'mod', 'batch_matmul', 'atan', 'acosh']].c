void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_6) {
  float auto_scheduler_layout_transform[1275];
  float T_batch_matmul_NN[595];
  for (int32_t ax4 = 0; ax4 < 17; ++ax4) {
    for (int32_t ax5 = 0; ax5 < 5; ++ax5) {
      for (int32_t ax9 = 0; ax9 < 15; ++ax9) {
        auto_scheduler_layout_transform[(((ax4 * 75) + (ax5 * 15)) + ax9)] = ph_6[(((ax4 * 75) + (ax9 * 5)) + ax5)];
      }
    }
  }
  for (int32_t b_outer_outer_inner = 0; b_outer_outer_inner < 17; ++b_outer_outer_inner) {
    for (int32_t i_outer_outer_inner = 0; i_outer_outer_inner < 7; ++i_outer_outer_inner) {
      for (int32_t j_outer_outer_inner = 0; j_outer_outer_inner < 5; ++j_outer_outer_inner) {
        T_batch_matmul_NN[(((b_outer_outer_inner * 35) + (i_outer_outer_inner * 5)) + j_outer_outer_inner)] = 0.000000e+00f;
        for (int32_t k_inner = 0; k_inner < 15; ++k_inner) {
          T_batch_matmul_NN[(((b_outer_outer_inner * 35) + (i_outer_outer_inner * 5)) + j_outer_outer_inner)] = (T_batch_matmul_NN[(((b_outer_outer_inner * 35) + (i_outer_outer_inner * 5)) + j_outer_outer_inner)] + (ph_0[(((b_outer_outer_inner * 105) + (i_outer_outer_inner * 15)) + k_inner)] * auto_scheduler_layout_transform[(((b_outer_outer_inner * 75) + (j_outer_outer_inner * 15)) + k_inner)]));
        }
      }
    }
  }
  for (int32_t i0_inner = 0; i0_inner < 17; ++i0_inner) {
    for (int32_t i1_inner = 0; i1_inner < 7; ++i1_inner) {
      for (int32_t i2_inner_s = 0; i2_inner_s < 5; ++i2_inner_s) {
        compute[(((i0_inner * 35) + (i1_inner * 5)) + i2_inner_s)] = atanf(T_batch_matmul_NN[(((i0_inner * 35) + (i1_inner * 5)) + i2_inner_s)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1785; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1785; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acoshf(fmodf(ph_0[i0_i1_fused_i2_fused], ph_3[i0_i1_fused_i2_fused]));
  }
}

