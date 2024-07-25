void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3040; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        compute_1[(((i0 * 160) + (i1 * 20)) + i2)] = fabsf(asinhf(ph_0[(((i0 * 160) + (i1 * 20)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 152; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
      compute_2[((i0_i1_fused * 20) + i2_1)] = asinf(ph_0[((i0_i1_fused * 20) + i2_1)]);
    }
  }
}

