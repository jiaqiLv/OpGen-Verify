void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2 = 0; i2 < 3; ++i2) {
        compute[(((i0 * 45) + (i1 * 3)) + i2)] = roundf(data[(((i0 * 45) + (i1 * 3)) + i2)]);
      }
    }
  }
}

