void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 12; ++ax3) {
          T_reverse_sequence[((((ax0 * 480) + (ax1 * 120)) + (ax2 * 12)) + ax3)] = data[(((((ax1 * 120) + (ax2 * 12)) + ax3) + 8160) - (ax0 * 480))];
        }
      }
    }
  }
}

