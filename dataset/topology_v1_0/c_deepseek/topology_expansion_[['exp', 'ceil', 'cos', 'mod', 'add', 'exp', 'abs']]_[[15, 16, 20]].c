void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4800; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4800; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = expf((ph_0[i0_i1_fused_i2_fused_1] + fmodf(ph_0[i0_i1_fused_i2_fused_1], cosf(ceilf(ph_0[i0_i1_fused_i2_fused_1])))));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 4800; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = fabsf((ph_0[i0_i1_fused_i2_fused_2] + fmodf(ph_0[i0_i1_fused_i2_fused_2], cosf(ceilf(ph_0[i0_i1_fused_i2_fused_2])))));
  }
}
