void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute[(((i0 * 45) + (i1 * 5)) + i2)] = atanhf(ph_0[(((i0 * 45) + (i1 * 5)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 495; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 495; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
}
