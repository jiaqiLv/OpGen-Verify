void default_function_kernel(float* Scale, float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 6; ++i1) {
      for (int32_t i2 = 0; i2 < 16; ++i2) {
        for (int32_t i3 = 0; i3 < 11; ++i3) {
          compute[((((i0 * 1056) + (i1 * 176)) + (i2 * 11)) + i3)] = ((0.000000e+00f < data[((((i0 * 1056) + (i1 * 176)) + (i2 * 11)) + i3)]) ? data[((((i0 * 1056) + (i1 * 176)) + (i2 * 11)) + i3)] : (data[((((i0 * 1056) + (i1 * 176)) + (i2 * 11)) + i3)] * Scale[i3]));
        }
      }
    }
  }
}

