void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        compute[(((i0 * 255) + (i1 * 17)) + i2)] = asinhf(data[(((i0 * 255) + (i1 * 17)) + i2)]);
      }
    }
  }
}

