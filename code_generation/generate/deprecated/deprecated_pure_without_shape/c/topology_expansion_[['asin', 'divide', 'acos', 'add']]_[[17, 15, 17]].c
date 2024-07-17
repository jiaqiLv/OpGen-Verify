void default_function_kernel(float* T_add, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2160; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + acosf((ph_0[ax0_ax1_fused_ax2_fused] / asinf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
}

