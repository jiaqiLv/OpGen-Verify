void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 11; ++i3) {
        compute[(((i0 * 22) + (i2 * 11)) + i3)] = roundf(data[(((i0 * 22) + (i2 * 11)) + i3)]);
      }
    }
  }
}
