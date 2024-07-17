void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 12; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 15; ++i3) {
        compute[(((i1 * 90) + (i2 * 15)) + i3)] = sinhf(data[(((i1 * 90) + (i2 * 15)) + i3)]);
      }
    }
  }
}

