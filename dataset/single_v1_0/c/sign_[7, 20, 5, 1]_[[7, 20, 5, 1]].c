void default_function_kernel(float* T_sign, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 7; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 20; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        T_sign[(((ax0 * 100) + (ax1 * 5)) + ax2)] = ((0.000000e+00f < data[(((ax0 * 100) + (ax1 * 5)) + ax2)]) ? 1.000000e+00f : ((data[(((ax0 * 100) + (ax1 * 5)) + ax2)] < 0.000000e+00f) ? -1.000000e+00f : 0.000000e+00f));
      }
    }
  }
}

