void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute[(((i0 * 77) + (i1 * 7)) + i2)] = cosf(ph_0[(((i0 * 77) + (i1 * 7)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 4; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 11; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
        compute_1[(((i0_1 * 77) + (i1_1 * 7)) + i2_1)] = cosf(sinf(ph_0[(((i0_1 * 77) + (i1_1 * 7)) + i2_1)]));
      }
    }
  }
}

