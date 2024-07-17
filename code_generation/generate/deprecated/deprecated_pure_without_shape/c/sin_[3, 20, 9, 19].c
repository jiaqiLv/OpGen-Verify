void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 3; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        for (int32_t i3 = 0; i3 < 19; ++i3) {
          compute[((((i0 * 3420) + (i1 * 171)) + (i2 * 19)) + i3)] = sinf(data[((((i0 * 3420) + (i1 * 171)) + (i2 * 19)) + i3)]);
        }
      }
    }
  }
}

