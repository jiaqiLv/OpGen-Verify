void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 13; ++i1) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 17; ++i3) {
        compute[(((i1 * 170) + (i2 * 17)) + i3)] = ceilf(data[(((i1 * 170) + (i2 * 17)) + i3)]);
      }
    }
  }
}
