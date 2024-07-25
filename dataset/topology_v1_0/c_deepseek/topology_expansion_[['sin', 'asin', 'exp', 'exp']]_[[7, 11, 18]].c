void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        compute[(((i0 * 198) + (i1 * 18)) + i2)] = sinf(ph_0[(((i0 * 198) + (i1 * 18)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1386; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(asinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 77; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute_2[((i0_i1_fused * 18) + i2_1)] = expf(ph_0[((i0_i1_fused * 18) + i2_1)]);
    }
  }
}

