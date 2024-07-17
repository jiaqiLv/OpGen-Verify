void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        for (int32_t i3 = 0; i3 < 14; ++i3) {
          compute[((((i0 * 140) + (i1 * 70)) + (i2 * 14)) + i3)] = (data[((((i0 * 140) + (i1 * 70)) + (i2 * 14)) + i3)] * -1.000000e+00f);
        }
      }
    }
  }
}

