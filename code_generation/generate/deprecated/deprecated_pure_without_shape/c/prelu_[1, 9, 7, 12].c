void default_function_kernel(float* Scale, float* compute, float* data) {
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 12; ++i3) {
        compute[(((i1 * 84) + (i2 * 12)) + i3)] = ((0.000000e+00f < data[(((i1 * 84) + (i2 * 12)) + i3)]) ? data[(((i1 * 84) + (i2 * 12)) + i3)] : (data[(((i1 * 84) + (i2 * 12)) + i3)] * Scale[i3]));
      }
    }
  }
}

