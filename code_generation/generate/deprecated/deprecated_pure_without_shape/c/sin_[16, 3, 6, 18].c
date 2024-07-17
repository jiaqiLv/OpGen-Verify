void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        for (int32_t i3 = 0; i3 < 18; ++i3) {
          compute[((((i0 * 324) + (i1 * 108)) + (i2 * 18)) + i3)] = sinf(data[((((i0 * 324) + (i1 * 108)) + (i2 * 18)) + i3)]);
        }
      }
    }
  }
}

