void default_function_kernel(float* T_multiply, float* T_multiply_1, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 836; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        compute[(((i0 * 76) + (i1 * 19)) + i2)] = fabsf(ph_0[(((i0 * 76) + (i1 * 19)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 44; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      T_multiply_1[((ax0_ax1_fused * 19) + ax2)] = (cosf(ph_0[((ax0_ax1_fused * 19) + ax2)]) * ph_0[((ax0_ax1_fused * 19) + ax2)]);
    }
  }
}

