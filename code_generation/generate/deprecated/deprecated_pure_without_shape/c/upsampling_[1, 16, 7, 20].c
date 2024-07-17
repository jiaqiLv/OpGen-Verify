void default_function_kernel(float* data, float* resize) {
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 80; ++i3) {
        resize[(((i1 * 2240) + (i2 * 80)) + i3)] = data[(((i1 * 560) + ((i2 / 2) * 40)) + (i3 / 2))];
      }
    }
  }
}

