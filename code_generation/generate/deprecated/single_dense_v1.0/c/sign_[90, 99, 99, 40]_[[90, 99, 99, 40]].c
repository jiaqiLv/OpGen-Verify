void default_function_kernel(float* T_sign, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8910; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 99; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        T_sign[(((ax0_ax1_fused * 3960) + (ax2 * 40)) + ax3)] = ((0.000000e+00f < data[(((ax0_ax1_fused * 3960) + (ax2 * 40)) + ax3)]) ? 1.000000e+00f : ((data[(((ax0_ax1_fused * 3960) + (ax2 * 40)) + ax3)] < 0.000000e+00f) ? -1.000000e+00f : 0.000000e+00f));
      }
    }
  }
}
