void default_function_kernel(float* T_add, float* T_add_1, float* T_multiply, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        T_add[(((ax0 * 187) + (ax1 * 17)) + ax2)] = (ph_0[(((ax0 * 187) + (ax1 * 17)) + ax2)] + ph_3[(((ax0 * 187) + (ax1 * 17)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1122; ++ax0_ax1_fused_ax2_fused) {
    T_add_1[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1122; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}
