void default_function_kernel(float* T_divide, float* T_divide_1, float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2560; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2560; ++ax0_ax1_fused_ax2_fused_1) {
    T_divide_1[ax0_ax1_fused_ax2_fused_1] = (acosf(ph_0[ax0_ax1_fused_ax2_fused_1]) / ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2560; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(acosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 2560; ++ax0_ax1_fused_ax2_fused_2) {
    T_multiply[ax0_ax1_fused_ax2_fused_2] = ((ph_0[ax0_ax1_fused_ax2_fused_2] / ph_3[ax0_ax1_fused_ax2_fused_2]) * ph_0[ax0_ax1_fused_ax2_fused_2]);
  }
}
