void default_function_kernel(float* T_multiply, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 300; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * atanf((ph_0[ax0_ax1_fused_ax2_fused] * atanhf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
}

