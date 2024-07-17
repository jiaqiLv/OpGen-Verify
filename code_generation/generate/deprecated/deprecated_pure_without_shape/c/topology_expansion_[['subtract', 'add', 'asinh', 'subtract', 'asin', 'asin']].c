void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 360; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 360; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(asinhf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 360; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (ph_0[ax0_ax1_fused_ax2_fused_1] + ph_3[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        compute_1[(((i0 * 18) + (i1 * 2)) + i2)] = asinf((ph_0[(((i0 * 18) + (i1 * 2)) + i2)] - ph_3[(((i0 * 18) + (i1 * 2)) + i2)]));
      }
    }
  }
}

