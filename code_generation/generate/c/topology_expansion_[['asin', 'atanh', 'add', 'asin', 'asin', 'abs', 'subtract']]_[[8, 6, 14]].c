void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 672; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 672; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (atanhf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 6; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute_1[(((i0 * 84) + (i1 * 14)) + i2)] = asinf(ph_0[(((i0 * 84) + (i1 * 14)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 672; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = fabsf(asinf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 8; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
        T_subtract[(((ax0 * 84) + (ax1 * 14)) + ax2)] = (asinf(ph_0[(((ax0 * 84) + (ax1 * 14)) + ax2)]) - ph_0[(((ax0 * 84) + (ax1 * 14)) + ax2)]);
      }
    }
  }
}

