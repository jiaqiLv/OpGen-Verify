void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        compute[(((i0 * 16) + (i1 * 8)) + i2)] = atanf(ph_0[(((i0 * 16) + (i1 * 8)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 13; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
        compute_1[(((i0_1 * 16) + (i1_1 * 8)) + i2_1)] = sinf(atanhf(ph_0[(((i0_1 * 16) + (i1_1 * 8)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 26; ++i0_i1_fused) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      compute_2[((i0_i1_fused * 8) + i2_2)] = expf(ph_0[((i0_i1_fused * 8) + i2_2)]);
    }
  }
}

