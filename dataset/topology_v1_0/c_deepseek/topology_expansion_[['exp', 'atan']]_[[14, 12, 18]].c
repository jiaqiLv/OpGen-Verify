void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3024; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 168; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute_1[((i0_i1_fused * 18) + i2)] = atanf(ph_0[((i0_i1_fused * 18) + i2)]);
    }
  }
}
