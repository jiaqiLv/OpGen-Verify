void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        T_reverse_sequence[(((ax0_ax1_fused * 52) + (ax2 * 4)) + ax3)] = data[((((((ax0_ax1_fused & 1) * 52) + (ax2 * 4)) + ax3) + 312) - ((ax0_ax1_fused >> 1) * 104))];
      }
    }
  }
}

