void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        compute[(((i0 * 64) + (i1 * 8)) + i2)] = fabsf(ph_0[(((i0 * 64) + (i1 * 8)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1280; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 20; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
        compute_1[(((i0_1 * 64) + (i1_1 * 8)) + i2_1)] = cosf(ph_0[(((i0_1 * 64) + (i1_1 * 8)) + i2_1)]);
      }
    }
  }
}

