void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2 = 0; i2 < 10; ++i2) {
        compute[(((i0 * 100) + (i1 * 10)) + i2)] = ceilf(ph_0[(((i0 * 100) + (i1 * 10)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 17; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 10; ++i2_1) {
        compute_1[(((i0_1 * 100) + (i1_1 * 10)) + i2_1)] = ceilf(ceilf(ph_0[(((i0_1 * 100) + (i1_1 * 10)) + i2_1)]));
      }
    }
  }
}

