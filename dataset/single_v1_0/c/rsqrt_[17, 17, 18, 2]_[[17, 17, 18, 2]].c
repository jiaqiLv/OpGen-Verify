void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 17; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        for (int32_t i3_s = 0; i3_s < 2; ++i3_s) {
          compute[((((i0 * 612) + (i1 * 36)) + (i2 * 2)) + i3_s)] = (1.000000e+00f / sqrtf(data[((((i0 * 612) + (i1 * 36)) + (i2 * 2)) + i3_s)]));
        }
      }
    }
  }
}

