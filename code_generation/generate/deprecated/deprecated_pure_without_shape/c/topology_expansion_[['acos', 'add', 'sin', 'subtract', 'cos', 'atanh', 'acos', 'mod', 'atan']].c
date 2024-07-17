void default_function_kernel(float* T_mod, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 495; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute_1[(((i0 * 45) + (i1 * 5)) + i2)] = acosf(cosf(ph_0[(((i0 * 45) + (i1 * 5)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 495; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - sinf((ph_0[ax0_ax1_fused_ax2_fused] + acosf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 495; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod[ax0_ax1_fused_ax2_fused_1] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused_1]), ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 495; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = atanf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

