void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute[(((i0 * 15) + (i1 * 5)) + i2)] = acosf(ph_0[(((i0 * 15) + (i1 * 5)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 240; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinhf(ceilf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 240; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 240; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (fabsf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

