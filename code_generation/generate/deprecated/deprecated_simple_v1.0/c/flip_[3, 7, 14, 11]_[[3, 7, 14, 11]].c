void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 21; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 11; ++ax3) {
        T_reverse_sequence[(((ax0_ax1_fused * 154) + (ax2 * 11)) + ax3)] = data[((((((ax0_ax1_fused % 7) * 154) + (ax2 * 11)) + ax3) + 2156) - ((ax0_ax1_fused / 7) * 1078))];
      }
    }
  }
}

