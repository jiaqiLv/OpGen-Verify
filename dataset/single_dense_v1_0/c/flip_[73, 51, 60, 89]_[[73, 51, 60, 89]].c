void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 3723; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 60; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 89; ++ax3) {
        T_reverse_sequence[(((ax0_ax1_fused * 5340) + (ax2 * 89)) + ax3)] = data[((((((ax0_ax1_fused % 51) * 5340) + (ax2 * 89)) + ax3) + 19608480) - ((ax0_ax1_fused / 51) * 272340))];
      }
    }
  }
}

