void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2016; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 18; ++ax3) {
      T_reverse_sequence[((ax0_ax1_fused_ax2_fused * 18) + ax3)] = data[(((((ax0_ax1_fused_ax2_fused % 144) * 18) + ax3) + 33696) - ((ax0_ax1_fused_ax2_fused / 144) * 2592))];
    }
  }
}
