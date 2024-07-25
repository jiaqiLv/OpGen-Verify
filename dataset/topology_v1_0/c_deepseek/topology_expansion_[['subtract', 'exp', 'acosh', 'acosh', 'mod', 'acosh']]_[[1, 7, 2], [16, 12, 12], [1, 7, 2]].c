void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 14; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t i1 = 0; i1 < 7; ++i1) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      compute_1[((i1 * 2) + i2)] = acoshf(acoshf(ph_0[((i1 * 2) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 14; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(acoshf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      compute_2[((i1_1 * 2) + i2_1)] = acoshf((ph_0[((i1_1 * 2) + i2_1)] - ph_3[((i1_1 * 2) + i2_1)]));
    }
  }
}

