void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        for (int32_t i3 = 0; i3 < 19; ++i3) {
          compute[((((i0 * 2964) + (i1 * 228)) + (i2 * 19)) + i3)] = tanhf(data[((((i0 * 2964) + (i1 * 228)) + (i2 * 19)) + i3)]);
        }
      }
    }
  }
}

