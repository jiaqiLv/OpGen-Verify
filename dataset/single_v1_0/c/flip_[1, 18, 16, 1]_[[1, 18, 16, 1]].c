void default_function_kernel(float* T_reverse_sequence, float* data) {
  for (int32_t ax1 = 0; ax1 < 18; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      T_reverse_sequence[((ax1 * 16) + ax2)] = data[((ax1 * 16) + ax2)];
    }
  }
}
