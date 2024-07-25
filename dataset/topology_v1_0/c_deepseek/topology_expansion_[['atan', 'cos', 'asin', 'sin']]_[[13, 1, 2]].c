void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 13; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      compute[((i0_i1_fused * 2) + i2)] = atanf(ph_0[((i0_i1_fused * 2) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 26; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 26; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = sinf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}

