void default_function_kernel(float* T_sign, float* data) {
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 6; ++ax3) {
        T_sign[(((ax1 * 102) + (ax2 * 6)) + ax3)] = ((0.000000e+00f < data[(((ax1 * 102) + (ax2 * 6)) + ax3)]) ? 1.000000e+00f : ((data[(((ax1 * 102) + (ax2 * 6)) + ax3)] < 0.000000e+00f) ? -1.000000e+00f : 0.000000e+00f));
      }
    }
  }
}

