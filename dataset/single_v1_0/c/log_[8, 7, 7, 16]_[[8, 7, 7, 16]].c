void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        for (int32_t i3 = 0; i3 < 16; ++i3) {
          compute[((((i0 * 784) + (i1 * 112)) + (i2 * 16)) + i3)] = logf(data[((((i0 * 784) + (i1 * 112)) + (i2 * 16)) + i3)]);
        }
      }
    }
  }
}

