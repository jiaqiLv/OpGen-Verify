void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 19; ++i1) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 10; ++i3) {
        compute[(((i1 * 50) + (i2 * 10)) + i3)] = acosf(data[(((i1 * 50) + (i2 * 10)) + i3)]);
      }
    }
  }
}
