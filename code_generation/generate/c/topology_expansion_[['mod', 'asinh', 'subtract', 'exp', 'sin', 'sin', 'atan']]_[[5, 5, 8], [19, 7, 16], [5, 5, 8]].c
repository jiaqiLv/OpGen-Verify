void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 200; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf((ph_0[i0_i1_fused_i2_fused] - asinhf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 200; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = sinf((ph_0[i0_i1_fused_i2_fused_1] - asinhf(ph_0[i0_i1_fused_i2_fused_1])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 25; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute_2[((i0_i1_fused * 8) + i2)] = sinf(fmodf(ph_0[((i0_i1_fused * 8) + i2)], ph_3[((i0_i1_fused * 8) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 25; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      compute_3[((i0_i1_fused_1 * 8) + i2_1)] = atanf(fmodf(ph_0[((i0_i1_fused_1 * 8) + i2_1)], ph_3[((i0_i1_fused_1 * 8) + i2_1)]));
    }
  }
}

