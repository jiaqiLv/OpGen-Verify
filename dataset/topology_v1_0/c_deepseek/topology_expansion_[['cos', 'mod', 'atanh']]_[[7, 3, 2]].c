void default_function_kernel(float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        compute[(((i0 * 6) + (i1 * 2)) + i2)] = atanhf(fmodf(ph_0[(((i0 * 6) + (i1 * 2)) + i2)], cosf(ph_0[(((i0 * 6) + (i1 * 2)) + i2)])));
      }
    }
  }
}
