void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        for (int32_t i3_s = 0; i3_s < 3; ++i3_s) {
          compute[((((i0 * 378) + (i1 * 21)) + (i2 * 3)) + i3_s)] = erff(data[((((i0 * 378) + (i1 * 21)) + (i2 * 3)) + i3_s)]);
        }
      }
    }
  }
}

