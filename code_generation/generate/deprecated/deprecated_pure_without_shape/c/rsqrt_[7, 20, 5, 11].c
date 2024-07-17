void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        for (int32_t i3 = 0; i3 < 11; ++i3) {
          compute[((((i0 * 1100) + (i1 * 55)) + (i2 * 11)) + i3)] = (1.000000e+00f / sqrtf(data[((((i0 * 1100) + (i1 * 55)) + (i2 * 11)) + i3)]));
        }
      }
    }
  }
}

