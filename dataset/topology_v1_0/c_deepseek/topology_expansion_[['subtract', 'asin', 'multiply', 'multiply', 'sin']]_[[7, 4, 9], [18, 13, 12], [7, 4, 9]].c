void default_function_kernel(float* T_multiply, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 7; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_subtract[(((ax0 * 36) + (ax1 * 9)) + ax2)] = (ph_0[(((ax0 * 36) + (ax1 * 9)) + ax2)] - ph_3[(((ax0 * 36) + (ax1 * 9)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 28; ++ax0_ax1_fused) {
    for (int32_t ax2_1 = 0; ax2_1 < 9; ++ax2_1) {
      T_multiply[((ax0_ax1_fused * 9) + ax2_1)] = ((ph_0[((ax0_ax1_fused * 9) + ax2_1)] * asinf(ph_0[((ax0_ax1_fused * 9) + ax2_1)])) * ph_0[((ax0_ax1_fused * 9) + ax2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 252; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf((ph_0[i0_i1_fused_i2_fused] * asinf(ph_0[i0_i1_fused_i2_fused])));
  }
}
