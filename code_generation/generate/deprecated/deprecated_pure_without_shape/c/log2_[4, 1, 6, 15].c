void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 15; ++i3) {
        compute[(((i0 * 90) + (i2 * 15)) + i3)] = log2f(data[(((i0 * 90) + (i2 * 15)) + i3)]);
      }
    }
  }
}

