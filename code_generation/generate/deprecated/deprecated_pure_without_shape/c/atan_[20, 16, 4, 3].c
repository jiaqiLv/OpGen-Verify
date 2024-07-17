void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      for (int32_t i2 = 0; i2 < 4; ++i2) {
        for (int32_t i3_s = 0; i3_s < 3; ++i3_s) {
          compute[((((i0 * 192) + (i1 * 12)) + (i2 * 3)) + i3_s)] = atanf(data[((((i0 * 192) + (i1 * 12)) + (i2 * 3)) + i3_s)]);
        }
      }
    }
  }
}

