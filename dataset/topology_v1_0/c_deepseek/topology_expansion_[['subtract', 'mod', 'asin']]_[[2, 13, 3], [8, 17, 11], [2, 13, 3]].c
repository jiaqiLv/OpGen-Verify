void default_function_kernel(float* T_mod, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 78; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 78; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod[ax0_ax1_fused_ax2_fused_1] = fmodf(ph_0[ax0_ax1_fused_ax2_fused_1], ph_3[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 26; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      compute[((i0_i1_fused * 3) + i2)] = asinf(ph_0[((i0_i1_fused * 3) + i2)]);
    }
  }
}

