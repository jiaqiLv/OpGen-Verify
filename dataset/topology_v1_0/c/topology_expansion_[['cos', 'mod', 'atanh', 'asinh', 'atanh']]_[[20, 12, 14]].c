void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3360; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(fmodf(ph_0[i0_i1_fused_i2_fused], cosf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute_1[(((i0 * 168) + (i1 * 14)) + i2)] = asinhf(ph_0[(((i0 * 168) + (i1 * 14)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 20; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 12; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
        compute_2[(((i0_1 * 168) + (i1_1 * 14)) + i2_1)] = atanhf(ph_0[(((i0_1 * 168) + (i1_1 * 14)) + i2_1)]);
      }
    }
  }
}
