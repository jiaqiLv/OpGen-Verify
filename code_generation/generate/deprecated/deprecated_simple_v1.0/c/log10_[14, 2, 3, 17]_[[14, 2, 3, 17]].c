void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 3; ++i2) {
        for (int32_t i3 = 0; i3 < 17; ++i3) {
          compute[((((i0 * 102) + (i1 * 51)) + (i2 * 17)) + i3)] = log10f(data[((((i0 * 102) + (i1 * 51)) + (i2 * 17)) + i3)]);
        }
      }
    }
  }
}

