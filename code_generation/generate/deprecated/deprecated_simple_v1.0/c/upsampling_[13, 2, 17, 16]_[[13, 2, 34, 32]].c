void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 68; ++i2) {
        for (int32_t i3 = 0; i3 < 64; ++i3) {
          resize[((((i0 * 8704) + (i1 * 4352)) + (i2 * 64)) + i3)] = data[((((i0 * 2176) + (i1 * 1088)) + ((i2 / 2) * 32)) + (i3 / 2))];
        }
      }
    }
  }
}

