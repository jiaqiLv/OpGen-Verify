void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 280; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      T_reverse_sequence[((ax0_ax1_fused * 16) + ax2)] = data[(((((ax0_ax1_fused % 14) * 16) + ax2) + 4256) - ((ax0_ax1_fused / 14) * 224))];
    }
  }
}
