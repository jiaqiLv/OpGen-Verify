void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 48; ++i2) {
        for (int32_t i3 = 0; i3 < 36; ++i3) {
          resize[((((i0 * 13824) + (i1 * 1728)) + (i2 * 36)) + i3)] = data[((((i0 * 3456) + (i1 * 432)) + ((i2 / 2) * 18)) + (i3 / 2))];
        }
      }
    }
  }
}

