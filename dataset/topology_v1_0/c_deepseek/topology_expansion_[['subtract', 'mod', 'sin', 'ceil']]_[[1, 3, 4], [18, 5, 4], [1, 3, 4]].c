void default_function_kernel(float* T_mod, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 3; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      T_subtract[((ax0_ax1_fused * 4) + ax2)] = (ph_0[((ax0_ax1_fused * 4) + ax2)] - ph_3[((ax0_ax1_fused * 4) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 3; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      T_mod[((ax0_ax1_fused_1 * 4) + ax2_1)] = fmodf(ph_0[((ax0_ax1_fused_1 * 4) + ax2_1)], ph_3[((ax0_ax1_fused_1 * 4) + ax2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 12; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(sinf(ph_0[i0_i1_fused_i2_fused]));
  }
}
