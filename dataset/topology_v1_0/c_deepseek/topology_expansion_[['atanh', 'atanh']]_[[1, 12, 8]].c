void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  for (int32_t i1 = 0; i1 < 12; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute[((i1 * 8) + i2)] = atanhf(ph_0[((i1 * 8) + i2)]);
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 12; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      compute_1[((i1_1 * 8) + i2_1)] = atanhf(ph_0[((i1_1 * 8) + i2_1)]);
    }
  }
}

