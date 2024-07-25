void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        for (int32_t i3_s = 0; i3_s < 12; ++i3_s) {
          compute[((((i0 * 2184) + (i1 * 168)) + (i2 * 12)) + i3_s)] = asinhf(data[((((i0 * 2184) + (i1 * 168)) + (i2 * 12)) + i3_s)]);
        }
      }
    }
  }
}

