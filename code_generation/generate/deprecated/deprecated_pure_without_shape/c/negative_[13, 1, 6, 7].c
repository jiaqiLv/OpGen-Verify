void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 7; ++i3) {
        compute[(((i0 * 42) + (i2 * 7)) + i3)] = (data[(((i0 * 42) + (i2 * 7)) + i3)] * -1.000000e+00f);
      }
    }
  }
}

