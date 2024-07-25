void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 102; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      compute_1[((i0 * 6) + i2)] = atanf(cosf(ph_0[((i0 * 6) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 17; ++i0_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      compute_2[((i0_1 * 6) + i2_1)] = atanhf(ph_0[((i0_1 * 6) + i2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 102; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = asinhf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}
