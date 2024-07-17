void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 5; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        for (int32_t i3 = 0; i3 < 72; ++i3) {
          resize[((((i0 * 7200) + (i1 * 1440)) + (i2 * 72)) + i3)] = data[((((i0 * 1800) + (i1 * 360)) + ((i2 / 2) * 36)) + (i3 / 2))];
        }
      }
    }
  }
}

