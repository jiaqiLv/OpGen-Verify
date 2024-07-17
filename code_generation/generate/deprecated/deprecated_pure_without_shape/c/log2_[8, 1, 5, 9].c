void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 9; ++i3) {
        compute[(((i0 * 45) + (i2 * 9)) + i3)] = log2f(data[(((i0 * 45) + (i2 * 9)) + i3)]);
      }
    }
  }
}
