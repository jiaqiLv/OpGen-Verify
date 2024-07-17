void default_function_kernel(float* T_add, float* T_multiply, float* T_multiply_1, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      T_add[((ax0 * 4) + ax2)] = (ph_0[((ax0 * 4) + ax2)] + ph_3[((ax0 * 4) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply_1[ax0_ax1_fused_ax2_fused_1] = (ceilf(ph_0[ax0_ax1_fused_ax2_fused_1]) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      compute[((i0_i1_fused * 4) + i2)] = asinf(ceilf(ph_0[((i0_i1_fused * 4) + i2)]));
    }
  }
}
