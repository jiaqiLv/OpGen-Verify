void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        compute[(((i0 * 280) + (i1 * 20)) + i2)] = fabsf(ph_0[(((i0 * 280) + (i1 * 20)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
      compute_1[((i0_i1_fused * 20) + i2_1)] = fabsf(cosf(ph_0[((i0_i1_fused * 20) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 560; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
}

