void default_function_kernel(float* T_subtract, float* T_subtract_1, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 104; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - asinhf((ph_0[ax0_ax1_fused_ax2_fused] / atanf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        compute[(((i0 * 52) + (i1 * 13)) + i2)] = acoshf(asinhf(ph_0[(((i0 * 52) + (i1 * 13)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
      T_subtract_1[((ax0_ax1_fused * 13) + ax2)] = (asinhf(ph_0[((ax0_ax1_fused * 13) + ax2)]) - ph_0[((ax0_ax1_fused * 13) + ax2)]);
    }
  }
}
