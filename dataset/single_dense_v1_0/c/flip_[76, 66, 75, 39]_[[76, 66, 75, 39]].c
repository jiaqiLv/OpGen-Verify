void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5016; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 75; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 39; ++ax3) {
        T_reverse_sequence[(((ax0_ax1_fused * 2925) + (ax2 * 39)) + ax3)] = data[((((((ax0_ax1_fused % 66) * 2925) + (ax2 * 39)) + ax3) + 14478750) - ((ax0_ax1_fused / 66) * 193050))];
      }
    }
  }
}

