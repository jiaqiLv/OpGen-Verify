void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 10080; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    T_reverse_sequence[ax0_ax1_fused_ax2_fused_ax3_fused] = data[(((ax0_ax1_fused_ax2_fused_ax3_fused % 1680) + 8400) - ((ax0_ax1_fused_ax2_fused_ax3_fused / 1680) * 1680))];
  }
}

