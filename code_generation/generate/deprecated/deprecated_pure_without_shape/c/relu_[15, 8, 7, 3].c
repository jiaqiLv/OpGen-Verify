void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        for (int32_t i3 = 0; i3 < 3; ++i3) {
          compute[((((i0 * 168) + (i1 * 21)) + (i2 * 3)) + i3)] = max(data[((((i0 * 168) + (i1 * 21)) + (i2 * 3)) + i3)], 0.000000e+00f);
        }
      }
    }
  }
}

