void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        for (int32_t i3 = 0; i3 < 11; ++i3) {
          compute[((((i0 * 660) + (i1 * 66)) + (i2 * 11)) + i3)] = logf(data[((((i0 * 660) + (i1 * 66)) + (i2 * 11)) + i3)]);
        }
      }
    }
  }
}

