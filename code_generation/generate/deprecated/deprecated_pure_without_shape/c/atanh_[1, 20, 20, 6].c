void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 20; ++i1) {
    for (int32_t i2 = 0; i2 < 20; ++i2) {
      for (int32_t i3 = 0; i3 < 6; ++i3) {
        compute[(((i1 * 120) + (i2 * 6)) + i3)] = atanhf(data[(((i1 * 120) + (i2 * 6)) + i3)]);
      }
    }
  }
}

