void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 6; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        for (int32_t i3 = 0; i3 < 4; ++i3) {
          compute[((((i0 * 120) + (i1 * 20)) + (i2 * 4)) + i3)] = ((int8_t)(data[((((i0 * 120) + (i1 * 20)) + (i2 * 4)) + i3)] != data[((((i0 * 120) + (i1 * 20)) + (i2 * 4)) + i3)]));
        }
      }
    }
  }
}

