void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 220; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * acoshf(fmodf(ph_0[ax0_ax1_fused_ax2_fused], sinf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 11; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      compute[((i0_i1_fused * 20) + i2)] = atanf(ceilf(ph_0[((i0_i1_fused * 20) + i2)]));
    }
  }
  for (int32_t i1 = 0; i1 < 11; ++i1) {
    for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
      compute_1[((i1 * 20) + i2_1)] = acosf(ceilf(ph_0[((i1 * 20) + i2_1)]));
    }
  }
}
