void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 56; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 17; ++ax3) {
        T_reverse_sequence[(((ax0_ax1_fused * 340) + (ax2 * 17)) + ax3)] = data[((((((ax0_ax1_fused % 14) * 340) + (ax2 * 17)) + ax3) + 14280) - ((ax0_ax1_fused / 14) * 4760))];
      }
    }
  }
}

