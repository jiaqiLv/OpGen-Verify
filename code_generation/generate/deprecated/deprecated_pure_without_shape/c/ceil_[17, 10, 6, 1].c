void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        compute[(((i0 * 60) + (i1 * 6)) + i2)] = ceilf(data[(((i0 * 60) + (i1 * 6)) + i2)]);
      }
    }
  }
}

