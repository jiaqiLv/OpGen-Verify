void default_function_kernel(float* T_divide, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
        T_divide[(((ax0 * 320) + (ax1 * 20)) + ax2)] = (ph_0[(((ax0 * 320) + (ax1 * 20)) + ax2)] / ceilf(ph_0[(((ax0 * 320) + (ax1 * 20)) + ax2)]));
      }
    }
  }
}

