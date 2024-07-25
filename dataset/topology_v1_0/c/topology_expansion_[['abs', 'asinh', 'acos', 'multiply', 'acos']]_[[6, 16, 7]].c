void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute[(((i0 * 112) + (i1 * 7)) + i2)] = fabsf(ph_0[(((i0 * 112) + (i1 * 7)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 672; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * acosf(asinhf(ph_0[ax0_ax1_fused_ax2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 96; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
      compute_1[((i0_i1_fused * 7) + i2_1)] = acosf(ph_0[((i0_i1_fused * 7) + i2_1)]);
    }
  }
}
