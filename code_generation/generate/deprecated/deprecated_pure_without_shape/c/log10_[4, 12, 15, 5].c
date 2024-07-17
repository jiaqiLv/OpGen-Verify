void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 15; ++i2) {
        for (int32_t i3 = 0; i3 < 5; ++i3) {
          compute[((((i0 * 900) + (i1 * 75)) + (i2 * 5)) + i3)] = log10f(data[((((i0 * 900) + (i1 * 75)) + (i2 * 5)) + i3)]);
        }
      }
    }
  }
}

