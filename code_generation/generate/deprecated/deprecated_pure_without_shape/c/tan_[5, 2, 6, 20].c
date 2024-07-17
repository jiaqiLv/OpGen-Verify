void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        for (int32_t i3 = 0; i3 < 20; ++i3) {
          compute[((((i0 * 240) + (i1 * 120)) + (i2 * 20)) + i3)] = tanf(data[((((i0 * 240) + (i1 * 120)) + (i2 * 20)) + i3)]);
        }
      }
    }
  }
}
