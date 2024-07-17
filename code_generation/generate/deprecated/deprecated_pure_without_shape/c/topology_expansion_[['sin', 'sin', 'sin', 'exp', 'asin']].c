void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        compute[(((i0 * 117) + (i1 * 13)) + i2)] = sinf(ph_0[(((i0 * 117) + (i1 * 13)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2223; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = sinf(sinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2223; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 2223; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = asinf(ph_0[i0_i1_fused_i2_fused_2]);
  }
}
