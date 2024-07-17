void default_function_kernel(float* T_sign, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 20; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
          T_sign[((((ax0 * 280) + (ax1 * 140)) + (ax2 * 14)) + ax3)] = ((0.000000e+00f < data[((((ax0 * 280) + (ax1 * 140)) + (ax2 * 14)) + ax3)]) ? 1.000000e+00f : ((data[((((ax0 * 280) + (ax1 * 140)) + (ax2 * 14)) + ax3)] < 0.000000e+00f) ? -1.000000e+00f : 0.000000e+00f));
        }
      }
    }
  }
}

