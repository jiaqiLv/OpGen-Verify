void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 12; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 10; ++i2) {
        compute[(((i0 * 80) + (i1 * 10)) + i2)] = fabsf(ph_0[(((i0 * 80) + (i1 * 10)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 960; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (sinf(ph_0[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 12; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 10; ++i2_1) {
        compute_1[(((i0_1 * 80) + (i1_1 * 10)) + i2_1)] = atanf(ph_0[(((i0_1 * 80) + (i1_1 * 10)) + i2_1)]);
      }
    }
  }
}

