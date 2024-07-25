void default_function_kernel(float* T_mod, float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 490; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 490; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
        T_multiply[(((ax0 * 98) + (ax1 * 14)) + ax2)] = (asinf(ph_0[(((ax0 * 98) + (ax1 * 14)) + ax2)]) * ph_0[(((ax0 * 98) + (ax1 * 14)) + ax2)]);
      }
    }
  }
}

