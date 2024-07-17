void default_function_kernel(float* T_divide, float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 792; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        compute[(((i0 * 72) + (i1 * 9)) + i2)] = asinf(ph_0[(((i0 * 72) + (i1 * 9)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 11; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 9; ++i2_1) {
        compute_1[(((i0_1 * 72) + (i1_1 * 9)) + i2_1)] = fabsf(atanf(ph_0[(((i0_1 * 72) + (i1_1 * 9)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 792; ++ax0_ax1_fused_ax2_fused_1) {
    T_divide[ax0_ax1_fused_ax2_fused_1] = (atanf(ph_0[ax0_ax1_fused_ax2_fused_1]) / ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}

