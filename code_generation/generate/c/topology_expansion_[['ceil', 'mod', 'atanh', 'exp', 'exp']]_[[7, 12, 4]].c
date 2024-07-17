void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 336; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(fmodf(ph_0[i0_i1_fused_i2_fused], ceilf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 4; ++i2) {
        compute_1[(((i0 * 48) + (i1 * 4)) + i2)] = expf(ph_0[(((i0 * 48) + (i1 * 4)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 84; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      compute_2[((i0_i1_fused * 4) + i2_1)] = expf(ph_0[((i0_i1_fused * 4) + i2_1)]);
    }
  }
}
