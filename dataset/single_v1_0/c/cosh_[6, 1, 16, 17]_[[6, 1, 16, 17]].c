void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 17; ++i3) {
        compute[(((i0 * 272) + (i2 * 17)) + i3)] = coshf(data[(((i0 * 272) + (i2 * 17)) + i3)]);
      }
    }
  }
}
