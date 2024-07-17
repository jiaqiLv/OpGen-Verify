void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        for (int32_t i3 = 0; i3 < 19; ++i3) {
          compute[((((i0 * 1615) + (i1 * 95)) + (i2 * 19)) + i3)] = log10f(data[((((i0 * 1615) + (i1 * 95)) + (i2 * 19)) + i3)]);
        }
      }
    }
  }
}

