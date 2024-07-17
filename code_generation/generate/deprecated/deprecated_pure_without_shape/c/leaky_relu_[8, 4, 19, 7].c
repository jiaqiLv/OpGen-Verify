void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 4; ++i1) {
      for (int32_t i2 = 0; i2 < 19; ++i2) {
        for (int32_t i3 = 0; i3 < 7; ++i3) {
          compute[((((i0 * 532) + (i1 * 133)) + (i2 * 7)) + i3)] = ((0.000000e+00f < data[((((i0 * 532) + (i1 * 133)) + (i2 * 7)) + i3)]) ? data[((((i0 * 532) + (i1 * 133)) + (i2 * 7)) + i3)] : (data[((((i0 * 532) + (i1 * 133)) + (i2 * 7)) + i3)] * 5.000000e-01f));
        }
      }
    }
  }
}

