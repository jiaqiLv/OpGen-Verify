void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 10; ++i2) {
        compute[(((i0 * 30) + (i1 * 10)) + i2)] = cosf(ph_0[(((i0 * 30) + (i1 * 10)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 150; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * (cosf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 5; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 3; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 10; ++i2_1) {
        compute_1[(((i0_1 * 30) + (i1_1 * 10)) + i2_1)] = expf(ph_0[(((i0_1 * 30) + (i1_1 * 10)) + i2_1)]);
      }
    }
  }
}

