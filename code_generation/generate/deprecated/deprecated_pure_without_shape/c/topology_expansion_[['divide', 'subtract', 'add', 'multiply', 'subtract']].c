void default_function_kernel(float* T_divide, float* T_multiply, float* T_subtract, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 78; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 78; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply[ax0_ax1_fused_ax2_fused_1] = ((ph_0[ax0_ax1_fused_ax2_fused_1] + (ph_0[ax0_ax1_fused_ax2_fused_1] - ph_3[ax0_ax1_fused_ax2_fused_1])) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 13; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      T_subtract[((ax0 * 6) + ax1)] = (ph_0[((ax0 * 6) + ax1)] - ph_3[((ax0 * 6) + ax1)]);
    }
  }
}

