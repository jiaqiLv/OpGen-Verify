void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        for (int32_t i3_s = 0; i3_s < 8; ++i3_s) {
          compute[((((i0 * 1728) + (i1 * 144)) + (i2 * 8)) + i3_s)] = ((int8_t)(data[((((i0 * 1728) + (i1 * 144)) + (i2 * 8)) + i3_s)] != data[((((i0 * 1728) + (i1 * 144)) + (i2 * 8)) + i3_s)]));
        }
      }
    }
  }
}

