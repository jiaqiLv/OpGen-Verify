void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf((ph_0[i0_i1_fused_i2_fused] / acosf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      compute_1[((i0 * 2) + i1)] = acosf(ph_0[((i0 * 2) + i1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    compute_2[i0_i1_fused] = atanf(ph_0[i0_i1_fused]);
  }
}
