void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 19; ++i1) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 10; ++i3) {
        compute[(((i1 * 40) + (i2 * 10)) + i3)] = expf(data[(((i1 * 40) + (i2 * 10)) + i3)]);
      }
    }
  }
}

