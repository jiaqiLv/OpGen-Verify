void default_function_kernel(float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 18; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 19; ++i3) {
        compute[(((i1 * 304) + (i2 * 19)) + i3)] = (1.000000e+00f / sqrtf(data[(((i1 * 304) + (i2 * 19)) + i3)]));
      }
    }
  }
}
