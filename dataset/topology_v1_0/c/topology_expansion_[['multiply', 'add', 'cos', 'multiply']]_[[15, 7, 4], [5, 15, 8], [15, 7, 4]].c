void default_function_kernel(float* T_add, float* T_multiply, float* T_multiply_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 105; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      T_multiply[((ax0_ax1_fused * 4) + ax2)] = (ph_0[((ax0_ax1_fused * 4) + ax2)] * ph_3[((ax0_ax1_fused * 4) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 420; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 420; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply_1[ax0_ax1_fused_ax2_fused_1] = (cosf(ph_0[ax0_ax1_fused_ax2_fused_1]) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}
