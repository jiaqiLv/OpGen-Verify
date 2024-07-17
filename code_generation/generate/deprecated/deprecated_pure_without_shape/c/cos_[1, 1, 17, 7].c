void default_function_kernel(float* compute, float* data) {
  for (int32_t i2 = 0; i2 < 17; ++i2) {
    for (int32_t i3 = 0; i3 < 7; ++i3) {
      compute[((i2 * 7) + i3)] = cosf(data[((i2 * 7) + i3)]);
    }
  }
}

