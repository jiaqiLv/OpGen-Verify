void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 240; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 6; ++i1) {
      for (int32_t i2 = 0; i2 < 4; ++i2) {
        compute[(((i0 * 24) + (i1 * 4)) + i2)] = atanf(ph_0[(((i0 * 24) + (i1 * 4)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 10; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
        compute_1[(((i0_1 * 24) + (i1_1 * 4)) + i2_1)] = sinf(atanhf(ph_0[(((i0_1 * 24) + (i1_1 * 4)) + i2_1)]));
      }
    }
  }
}

