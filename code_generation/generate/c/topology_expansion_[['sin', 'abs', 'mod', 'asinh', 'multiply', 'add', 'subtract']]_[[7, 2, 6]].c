void default_function_kernel(float* T_add, float* T_mod, float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 84; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 84; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(fabsf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 7; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
        T_add[(((ax0 * 12) + (ax1 * 6)) + ax2)] = ((ph_0[(((ax0 * 12) + (ax1 * 6)) + ax2)] * asinhf(ph_0[(((ax0 * 12) + (ax1 * 6)) + ax2)])) + ph_0[(((ax0 * 12) + (ax1 * 6)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 7; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
        T_subtract[(((ax0_1 * 12) + (ax1_1 * 6)) + ax2_1)] = ((ph_0[(((ax0_1 * 12) + (ax1_1 * 6)) + ax2_1)] * asinhf(ph_0[(((ax0_1 * 12) + (ax1_1 * 6)) + ax2_1)])) - ph_0[(((ax0_1 * 12) + (ax1_1 * 6)) + ax2_1)]);
      }
    }
  }
}
