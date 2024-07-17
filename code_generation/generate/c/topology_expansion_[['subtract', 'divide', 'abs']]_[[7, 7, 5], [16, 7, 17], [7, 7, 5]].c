void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 245; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 245; ++ax0_ax1_fused_ax2_fused_1) {
    T_divide[ax0_ax1_fused_ax2_fused_1] = (ph_0[ax0_ax1_fused_ax2_fused_1] / ph_3[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute[(((i0 * 35) + (i1 * 5)) + i2)] = fabsf(ph_0[(((i0 * 35) + (i1 * 5)) + i2)]);
      }
    }
  }
}

