void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 3; ++i1) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        compute[(((i1 * 6) + (i2 * 3)) + i3)] = log2f(data[(((i1 * 6) + (i2 * 3)) + i3)]);
      }
    }
  }
}

