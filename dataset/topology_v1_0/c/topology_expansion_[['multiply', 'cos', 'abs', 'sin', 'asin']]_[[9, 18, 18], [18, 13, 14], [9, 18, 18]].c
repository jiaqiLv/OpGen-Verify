void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 162; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      T_multiply[((ax0_ax1_fused * 18) + ax2)] = (ph_0[((ax0_ax1_fused * 18) + ax2)] * ph_3[((ax0_ax1_fused * 18) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        compute[(((i0 * 324) + (i1 * 18)) + i2)] = cosf(ph_0[(((i0 * 324) + (i1 * 18)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2916; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = sinf(fabsf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2916; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}
