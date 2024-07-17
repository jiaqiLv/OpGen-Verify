void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 12; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        for (int32_t i3 = 0; i3 < 13; ++i3) {
          compute[((((i0 * 156) + (i1 * 78)) + (i2 * 13)) + i3)] = ((0.000000e+00f < data[((((i0 * 156) + (i1 * 78)) + (i2 * 13)) + i3)]) ? data[((((i0 * 156) + (i1 * 78)) + (i2 * 13)) + i3)] : (data[((((i0 * 156) + (i1 * 78)) + (i2 * 13)) + i3)] * 5.000000e-01f));
        }
      }
    }
  }
}

