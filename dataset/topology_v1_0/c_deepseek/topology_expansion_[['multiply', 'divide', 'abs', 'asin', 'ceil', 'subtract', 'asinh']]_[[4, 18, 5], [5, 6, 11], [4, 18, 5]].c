void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 360; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(fabsf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute_1[(((i0 * 90) + (i1 * 5)) + i2)] = ceilf(fabsf(ph_0[(((i0 * 90) + (i1 * 5)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 360; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 360; ++ax0_ax1_fused_ax2_fused_1) {
    T_subtract[ax0_ax1_fused_ax2_fused_1] = ((ph_0[ax0_ax1_fused_ax2_fused_1] * ph_3[ax0_ax1_fused_ax2_fused_1]) - ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 360; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinhf((ph_0[i0_i1_fused_i2_fused_1] * ph_3[i0_i1_fused_i2_fused_1]));
  }
}

