void default_function_kernel(float* T_reverse_sequence, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 90; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
      T_reverse_sequence[((ax0_ax1_fused * 11) + ax2)] = data[(((((ax0_ax1_fused % 18) * 11) + ax2) + 792) - ((ax0_ax1_fused / 18) * 198))];
    }
  }
}

