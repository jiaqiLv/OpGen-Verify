void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 12; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        compute[(((i0 * 132) + (i1 * 12)) + i2)] = sinf(data[(((i0 * 132) + (i1 * 12)) + i2)]);
      }
    }
  }
}

