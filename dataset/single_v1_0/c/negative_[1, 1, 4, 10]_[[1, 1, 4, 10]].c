void default_function_kernel(float* compute, float* data) {
  for (int32_t i2 = 0; i2 < 4; ++i2) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      compute[((i2 * 10) + i3)] = (data[((i2 * 10) + i3)] * -1.000000e+00f);
    }
  }
}
