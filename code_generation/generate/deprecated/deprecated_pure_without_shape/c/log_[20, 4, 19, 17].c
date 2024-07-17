void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        for (int32_t i3 = 0; i3 < 17; ++i3) {
          compute[((((i0 * 1292) + (i1 * 323)) + (i2 * 17)) + i3)] = logf(data[((((i0 * 1292) + (i1 * 323)) + (i2 * 17)) + i3)]);
        }
      }
    }
  }
}

