void default_function_kernel(float* T_divide, float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      T_multiply[((ax1 * 14) + ax2)] = (ph_0[((ax1 * 14) + ax2)] * ph_3[((ax1 * 14) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 98; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 98; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
}
