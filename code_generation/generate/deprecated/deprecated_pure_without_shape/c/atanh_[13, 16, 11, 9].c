void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      for (int32_t i2 = 0; i2 < 11; ++i2) {
        for (int32_t i3_s = 0; i3_s < 9; ++i3_s) {
          compute[((((i0 * 1584) + (i1 * 99)) + (i2 * 9)) + i3_s)] = atanhf(data[((((i0 * 1584) + (i1 * 99)) + (i2 * 9)) + i3_s)]);
        }
      }
    }
  }
}

