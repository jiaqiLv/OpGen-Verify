void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 13; ++ax3) {
          T_reverse_sequence[((((ax0 * 2028) + (ax1 * 156)) + (ax2 * 13)) + ax3)] = data[(((((ax1 * 156) + (ax2 * 13)) + ax3) + 6084) - (ax0 * 2028))];
        }
      }
    }
  }
}
