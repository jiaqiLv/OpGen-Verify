void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        for (int32_t i3 = 0; i3 < 17; ++i3) {
          compute[((((i0 * 1666) + (i1 * 238)) + (i2 * 17)) + i3)] = sinhf(data[((((i0 * 1666) + (i1 * 238)) + (i2 * 17)) + i3)]);
        }
      }
    }
  }
}
