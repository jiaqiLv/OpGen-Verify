void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 21280; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    T_reverse_sequence[ax0_ax1_fused_ax2_fused_ax3_fused] = data[(((ax0_ax1_fused_ax2_fused_ax3_fused % 2660) + 18620) - ((ax0_ax1_fused_ax2_fused_ax3_fused / 2660) * 2660))];
  }
}

