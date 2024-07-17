void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 14; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 13; ++i3) {
        compute[(((i1 * 91) + (i2 * 13)) + i3)] = tanhf(data[(((i1 * 91) + (i2 * 13)) + i3)]);
      }
    }
  }
}

