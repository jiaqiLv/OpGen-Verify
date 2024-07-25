void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 5; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute[(((i0 * 70) + (i1 * 14)) + i2)] = sinf(ph_0[(((i0 * 70) + (i1 * 14)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 8; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 5; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
        compute_1[(((i0_1 * 70) + (i1_1 * 14)) + i2_1)] = atanf(atanhf(ph_0[(((i0_1 * 70) + (i1_1 * 14)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 560; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
}
