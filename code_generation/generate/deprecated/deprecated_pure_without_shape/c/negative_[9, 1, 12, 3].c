void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        compute[(((i0 * 36) + (i2 * 3)) + i3)] = (data[(((i0 * 36) + (i2 * 3)) + i3)] * -1.000000e+00f);
      }
    }
  }
}

