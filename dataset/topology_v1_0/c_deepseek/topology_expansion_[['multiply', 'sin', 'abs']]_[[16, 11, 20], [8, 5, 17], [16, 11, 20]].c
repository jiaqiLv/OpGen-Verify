void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3520; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        compute[(((i0 * 220) + (i1 * 20)) + i2)] = sinf(ph_0[(((i0 * 220) + (i1 * 20)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 16; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 11; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
        compute_1[(((i0_1 * 220) + (i1_1 * 20)) + i2_1)] = fabsf(ph_0[(((i0_1 * 220) + (i1_1 * 20)) + i2_1)]);
      }
    }
  }
}
