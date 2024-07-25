void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 43; ++i0) {
    for (int32_t i1 = 0; i1 < 59; ++i1) {
      for (int32_t i2 = 0; i2 < 86; ++i2) {
        for (int32_t i3 = 0; i3 < 45; ++i3) {
          compute[((((i0 * 228330) + (i1 * 3870)) + (i2 * 45)) + i3)] = roundf(data[((((i0 * 228330) + (i1 * 3870)) + (i2 * 45)) + i3)]);
        }
      }
    }
  }
}

