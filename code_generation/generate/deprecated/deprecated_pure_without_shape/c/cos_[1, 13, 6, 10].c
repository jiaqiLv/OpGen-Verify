void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 13; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 10; ++i3) {
        compute[(((i1 * 60) + (i2 * 10)) + i3)] = cosf(data[(((i1 * 60) + (i2 * 10)) + i3)]);
      }
    }
  }
}
