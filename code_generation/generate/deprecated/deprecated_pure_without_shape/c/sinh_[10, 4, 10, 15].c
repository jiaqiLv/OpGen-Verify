void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 10; ++i2) {
        for (int32_t i3 = 0; i3 < 15; ++i3) {
          compute[((((i0 * 600) + (i1 * 150)) + (i2 * 15)) + i3)] = sinhf(data[((((i0 * 600) + (i1 * 150)) + (i2 * 15)) + i3)]);
        }
      }
    }
  }
}

