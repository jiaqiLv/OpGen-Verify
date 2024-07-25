void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        for (int32_t i3_s = 0; i3_s < 16; ++i3_s) {
          compute[((((i0 * 2304) + (i1 * 288)) + (i2 * 16)) + i3_s)] = acosf(data[((((i0 * 2304) + (i1 * 288)) + (i2 * 16)) + i3_s)]);
        }
      }
    }
  }
}
