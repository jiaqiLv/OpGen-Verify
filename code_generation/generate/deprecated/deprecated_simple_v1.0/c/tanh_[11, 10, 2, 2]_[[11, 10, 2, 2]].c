void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        for (int32_t i3 = 0; i3 < 2; ++i3) {
          compute[((((i0 * 40) + (i1 * 4)) + (i2 * 2)) + i3)] = tanhf(data[((((i0 * 40) + (i1 * 4)) + (i2 * 2)) + i3)]);
        }
      }
    }
  }
}

