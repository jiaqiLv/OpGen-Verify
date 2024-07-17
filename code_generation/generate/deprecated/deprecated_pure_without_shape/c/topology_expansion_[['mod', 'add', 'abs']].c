void default_function_kernel(float* T_add, float* T_mod, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      T_mod[((ax0_ax1_fused * 12) + ax2)] = fmodf(ph_0[((ax0_ax1_fused * 12) + ax2)], ph_3[((ax0_ax1_fused * 12) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 16; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 12; ++ax2_1) {
      T_add[((ax0_ax1_fused_1 * 12) + ax2_1)] = (ph_0[((ax0_ax1_fused_1 * 12) + ax2_1)] + ph_3[((ax0_ax1_fused_1 * 12) + ax2_1)]);
    }
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute[((i1 * 12) + i2)] = fabsf(ph_0[((i1 * 12) + i2)]);
    }
  }
}

