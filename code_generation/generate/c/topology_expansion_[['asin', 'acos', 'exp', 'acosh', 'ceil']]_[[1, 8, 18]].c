void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 144; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute_1[((i0_i1_fused * 18) + i2)] = expf(acosf(ph_0[((i0_i1_fused * 18) + i2)]));
    }
  }
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute_2[((i1 * 18) + i2_1)] = acoshf(ph_0[((i1 * 18) + i2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 144; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = ceilf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}
