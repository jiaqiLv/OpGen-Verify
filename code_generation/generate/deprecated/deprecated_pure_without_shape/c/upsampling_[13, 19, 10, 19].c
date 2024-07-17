void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 19; ++i1) {
      for (int32_t i2 = 0; i2 < 40; ++i2) {
        for (int32_t i3 = 0; i3 < 76; ++i3) {
          resize[((((i0 * 57760) + (i1 * 3040)) + (i2 * 76)) + i3)] = data[((((i0 * 14440) + (i1 * 760)) + ((i2 / 2) * 38)) + (i3 / 2))];
        }
      }
    }
  }
}

