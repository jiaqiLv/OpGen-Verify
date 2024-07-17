void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 72; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 72; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(ceilf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  for (int32_t i1 = 0; i1 < 4; ++i1) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute_2[((i1 * 18) + i2)] = expf(ph_0[((i1 * 18) + i2)]);
    }
  }
}

