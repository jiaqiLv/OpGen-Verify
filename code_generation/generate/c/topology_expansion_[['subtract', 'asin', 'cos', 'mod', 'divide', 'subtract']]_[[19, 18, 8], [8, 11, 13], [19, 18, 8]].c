void default_function_kernel(float* T_divide, float* T_mod, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2736; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 18; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
        T_mod[(((ax0 * 144) + (ax1 * 8)) + ax2)] = fmodf(cosf(ph_0[(((ax0 * 144) + (ax1 * 8)) + ax2)]), ph_0[(((ax0 * 144) + (ax1 * 8)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2736; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (cosf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2736; ++ax0_ax1_fused_ax2_fused_1) {
    T_subtract[ax0_ax1_fused_ax2_fused_1] = ((ph_0[ax0_ax1_fused_ax2_fused_1] - ph_3[ax0_ax1_fused_ax2_fused_1]) - ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}
