void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        for (int32_t i3 = 0; i3 < 6; ++i3) {
          compute[((((i0 * 204) + (i1 * 12)) + (i2 * 6)) + i3)] = erff(data[((((i0 * 204) + (i1 * 12)) + (i2 * 6)) + i3)]);
        }
      }
    }
  }
}
