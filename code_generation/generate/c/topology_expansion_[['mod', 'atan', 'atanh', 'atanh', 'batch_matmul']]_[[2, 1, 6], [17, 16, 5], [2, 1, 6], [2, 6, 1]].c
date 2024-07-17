void default_function_kernel(float* T_batch_matmul_NN, float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3, float* ph_8) {
  float auto_scheduler_layout_transform[12];
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 2; ++ax0) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      T_mod[((ax0 * 6) + ax2)] = fmodf(ph_0[((ax0 * 6) + ax2)], ph_3[((ax0 * 6) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 12; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 12; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanhf(atanhf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2; ++ax0_ax1_fused) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      auto_scheduler_layout_transform[((ax0_ax1_fused * 6) + ax2_1)] = ph_8[((ax0_ax1_fused * 6) + ax2_1)];
    }
  }
  #pragma omp parallel for
  for (int32_t b_i_fused_j_fused = 0; b_i_fused_j_fused < 2; ++b_i_fused_j_fused) {
    T_batch_matmul_NN[b_i_fused_j_fused] = 0.000000e+00f;
    for (int32_t k = 0; k < 6; ++k) {
      T_batch_matmul_NN[b_i_fused_j_fused] = (T_batch_matmul_NN[b_i_fused_j_fused] + (atanhf(ph_0[((b_i_fused_j_fused * 6) + k)]) * auto_scheduler_layout_transform[((b_i_fused_j_fused * 6) + k)]));
    }
  }
}

