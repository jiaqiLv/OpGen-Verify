void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 3; ++i2) {
        for (int32_t i3 = 0; i3 < 3; ++i3) {
          compute[((((i0 * 126) + (i1 * 9)) + (i2 * 3)) + i3)] = (data[((((i0 * 126) + (i1 * 9)) + (i2 * 3)) + i3)] * -1.000000e+00f);
        }
      }
    }
  }
}
