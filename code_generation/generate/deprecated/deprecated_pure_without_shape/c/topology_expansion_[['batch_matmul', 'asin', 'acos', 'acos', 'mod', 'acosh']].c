void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float auto_scheduler_layout_transform[315];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 189; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 189; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 189; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 15; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax6 = 0; ax6 < 7; ++ax6) {
      for (int32_t ax7 = 0; ax7 < 3; ++ax7) {
        auto_scheduler_layout_transform[(((ax0_ax1_fused_ax2_fused_1 * 21) + (ax6 * 3)) + ax7)] = ph_3[(((((ax0_ax1_fused_ax2_fused_1 / 5) * 105) + (ax7 * 35)) + (ax6 * 5)) + (ax0_ax1_fused_ax2_fused_1 % 5))];
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_outer_i1_outer_fused_i2_outer_fused = 0; i0_outer_i1_outer_fused_i2_outer_fused < 45; ++i0_outer_i1_outer_fused_i2_outer_fused) {
    float T_batch_matmul_NN[3];
    for (int32_t b_outer_inner_init = 0; b_outer_inner_init < 3; ++b_outer_inner_init) {
      T_batch_matmul_NN[b_outer_inner_init] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 7; ++k_outer) {
      for (int32_t b_outer_inner = 0; b_outer_inner < 3; ++b_outer_inner) {
        T_batch_matmul_NN[b_outer_inner] = (T_batch_matmul_NN[b_outer_inner] + (ph_0[(((((i0_outer_i1_outer_fused_i2_outer_fused / 15) * 63) + (b_outer_inner * 21)) + (((i0_outer_i1_outer_fused_i2_outer_fused % 15) / 5) * 7)) + k_outer)] * auto_scheduler_layout_transform[(((((i0_outer_i1_outer_fused_i2_outer_fused / 15) * 105) + ((i0_outer_i1_outer_fused_i2_outer_fused % 5) * 21)) + (k_outer * 3)) + b_outer_inner)]));
      }
    }
    for (int32_t i0_inner = 0; i0_inner < 3; ++i0_inner) {
      compute_2[((((i0_outer_i1_outer_fused_i2_outer_fused / 15) * 45) + (i0_inner * 15)) + (i0_outer_i1_outer_fused_i2_outer_fused % 15))] = acoshf(T_batch_matmul_NN[i0_inner]);
    }
  }
}

