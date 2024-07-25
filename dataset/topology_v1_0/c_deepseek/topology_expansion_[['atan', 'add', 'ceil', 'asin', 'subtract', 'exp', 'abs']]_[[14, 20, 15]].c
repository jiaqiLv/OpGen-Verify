void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 14; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 15; ++i2) {
        compute[(((i0 * 300) + (i1 * 15)) + i2)] = ceilf((ph_0[(((i0 * 300) + (i1 * 15)) + i2)] + atanf(ph_0[(((i0 * 300) + (i1 * 15)) + i2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4200; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf((ph_0[i0_i1_fused_i2_fused] - asinf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 280; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 15; ++i2_1) {
      compute_2[((i0_i1_fused * 15) + i2_1)] = fabsf((ph_0[((i0_i1_fused * 15) + i2_1)] - asinf(ph_0[((i0_i1_fused * 15) + i2_1)])));
    }
  }
}

