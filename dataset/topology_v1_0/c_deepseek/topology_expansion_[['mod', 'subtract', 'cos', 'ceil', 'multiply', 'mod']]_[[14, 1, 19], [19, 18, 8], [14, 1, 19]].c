void default_function_kernel(float* T_mod, float* T_multiply, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 266; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute[((i0_i1_fused * 19) + i2)] = ceilf(cosf(ph_0[((i0_i1_fused * 19) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 266; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply[ax0_ax1_fused_ax2_fused_1] = (cosf(ph_0[ax0_ax1_fused_ax2_fused_1]) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 14; ++ax0) {
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      T_mod[((ax0 * 19) + ax2)] = fmodf(fmodf(ph_0[((ax0 * 19) + ax2)], ph_3[((ax0 * 19) + ax2)]), ph_0[((ax0 * 19) + ax2)]);
    }
  }
}

