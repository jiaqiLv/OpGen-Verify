void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        for (int32_t i3_s = 0; i3_s < 6; ++i3_s) {
          compute[((((i0 * 912) + (i1 * 114)) + (i2 * 6)) + i3_s)] = asinhf(data[((((i0 * 912) + (i1 * 114)) + (i2 * 6)) + i3_s)]);
        }
      }
    }
  }
}
