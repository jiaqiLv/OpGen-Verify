void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 15; ++i2) {
        compute[(((i0 * 120) + (i1 * 15)) + i2)] = sinf(ph_0[(((i0 * 120) + (i1 * 15)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 960; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = ceilf(asinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 64; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 15; ++i2_1) {
      compute_2[((i0_i1_fused * 15) + i2_1)] = asinhf(ph_0[((i0_i1_fused * 15) + i2_1)]);
    }
  }
}

