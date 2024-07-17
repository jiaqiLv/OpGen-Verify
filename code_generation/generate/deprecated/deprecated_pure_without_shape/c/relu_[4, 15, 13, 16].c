void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        for (int32_t i3 = 0; i3 < 16; ++i3) {
          compute[((((i0 * 3120) + (i1 * 208)) + (i2 * 16)) + i3)] = max(data[((((i0 * 3120) + (i1 * 208)) + (i2 * 16)) + i3)], 0.000000e+00f);
        }
      }
    }
  }
}

