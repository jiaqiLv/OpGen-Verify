void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 11; ++i3) {
        compute[(((i1 * 77) + (i2 * 11)) + i3)] = log10f(data[(((i1 * 77) + (i2 * 11)) + i3)]);
      }
    }
  }
}
