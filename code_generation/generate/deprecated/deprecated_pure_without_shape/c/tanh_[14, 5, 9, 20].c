void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 5; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        for (int32_t i3 = 0; i3 < 20; ++i3) {
          compute[((((i0 * 900) + (i1 * 180)) + (i2 * 20)) + i3)] = tanhf(data[((((i0 * 900) + (i1 * 180)) + (i2 * 20)) + i3)]);
        }
      }
    }
  }
}

