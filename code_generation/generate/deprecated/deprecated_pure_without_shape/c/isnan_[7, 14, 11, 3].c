void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 11; ++i2) {
        for (int32_t i3_s = 0; i3_s < 3; ++i3_s) {
          compute[((((i0 * 462) + (i1 * 33)) + (i2 * 3)) + i3_s)] = ((int8_t)(data[((((i0 * 462) + (i1 * 33)) + (i2 * 3)) + i3_s)] != data[((((i0 * 462) + (i1 * 33)) + (i2 * 3)) + i3_s)]));
        }
      }
    }
  }
}

