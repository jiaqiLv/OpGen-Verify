void default_function_kernel(float* T_add, float* T_subtract, float* T_subtract_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
        T_subtract[(((ax0 * 240) + (ax1 * 20)) + ax2)] = (ph_0[(((ax0 * 240) + (ax1 * 20)) + ax2)] - ph_3[(((ax0 * 240) + (ax1 * 20)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2880; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2880; ++ax0_ax1_fused_ax2_fused_1) {
    T_subtract_1[ax0_ax1_fused_ax2_fused_1] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused_1]) - ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}

