void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 5; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
          T_reverse_sequence[((((ax0 * 280) + (ax1 * 56)) + (ax2 * 14)) + ax3)] = data[(((((ax1 * 56) + (ax2 * 14)) + ax3) + 4760) - (ax0 * 280))];
        }
      }
    }
  }
}
