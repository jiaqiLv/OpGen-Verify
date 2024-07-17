void default_function_kernel(int8_t* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        for (int32_t i3 = 0; i3 < 18; ++i3) {
          compute[((((i0 * 3024) + (i1 * 216)) + (i2 * 18)) + i3)] = ((int8_t)(data[((((i0 * 3024) + (i1 * 216)) + (i2 * 18)) + i3)] != data[((((i0 * 3024) + (i1 * 216)) + (i2 * 18)) + i3)]));
        }
      }
    }
  }
}

