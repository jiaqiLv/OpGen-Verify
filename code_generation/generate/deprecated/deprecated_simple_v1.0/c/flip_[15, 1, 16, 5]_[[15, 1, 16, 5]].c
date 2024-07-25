void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 15; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
        T_reverse_sequence[(((ax0_ax1_fused * 80) + (ax2 * 5)) + ax3)] = data[((((ax2 * 5) + ax3) + 1120) - (ax0_ax1_fused * 80))];
      }
    }
  }
}

