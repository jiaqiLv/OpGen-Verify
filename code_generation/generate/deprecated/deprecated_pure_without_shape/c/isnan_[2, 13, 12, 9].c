void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        for (int32_t i3 = 0; i3 < 9; ++i3) {
          compute[((((i0 * 1404) + (i1 * 108)) + (i2 * 9)) + i3)] = ((int8_t)(data[((((i0 * 1404) + (i1 * 108)) + (i2 * 9)) + i3)] != data[((((i0 * 1404) + (i1 * 108)) + (i2 * 9)) + i3)]));
        }
      }
    }
  }
}

