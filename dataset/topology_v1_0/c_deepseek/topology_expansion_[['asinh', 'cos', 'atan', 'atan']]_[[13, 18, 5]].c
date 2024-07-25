void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1170; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute_1[(((i0 * 90) + (i1 * 5)) + i2)] = atanf(cosf(ph_0[(((i0 * 90) + (i1 * 5)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 234; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
      compute_2[((i0_i1_fused * 5) + i2_1)] = atanf(ph_0[((i0_i1_fused * 5) + i2_1)]);
    }
  }
}
