void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        for (int32_t i3 = 0; i3 < 9; ++i3) {
          compute[((((i0 * 216) + (i1 * 72)) + (i2 * 9)) + i3)] = erff(data[((((i0 * 216) + (i1 * 72)) + (i2 * 9)) + i3)]);
        }
      }
    }
  }
}

