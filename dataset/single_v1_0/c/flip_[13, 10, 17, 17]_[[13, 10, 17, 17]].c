void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 13; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 17; ++ax3) {
          T_reverse_sequence[((((ax0 * 2890) + (ax1 * 289)) + (ax2 * 17)) + ax3)] = data[(((((ax1 * 289) + (ax2 * 17)) + ax3) + 34680) - (ax0 * 2890))];
        }
      }
    }
  }
}
