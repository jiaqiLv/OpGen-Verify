void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 13; ++i2) {
      compute[((i0_i1_fused * 13) + i2)] = acosf(ph_0[((i0_i1_fused * 13) + i2)]);
    }
  }
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2_1 = 0; i2_1 < 13; ++i2_1) {
      compute_1[((i1 * 13) + i2_1)] = asinf(asinf(ph_0[((i1 * 13) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 104; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ceilf(ph_0[ax0_ax1_fused_ax2_fused]));
  }
}
