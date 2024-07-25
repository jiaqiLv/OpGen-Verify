void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 700; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute_1[(((i0 * 35) + (i1 * 5)) + i2)] = sinf(atanhf(ph_0[(((i0 * 35) + (i1 * 5)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 20; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
        compute_2[(((i0_1 * 35) + (i1_1 * 5)) + i2_1)] = ceilf(ph_0[(((i0_1 * 35) + (i1_1 * 5)) + i2_1)]);
      }
    }
  }
}
