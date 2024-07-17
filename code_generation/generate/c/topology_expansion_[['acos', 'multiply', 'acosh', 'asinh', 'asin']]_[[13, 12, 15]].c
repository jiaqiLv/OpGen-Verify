void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2340; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf((ph_0[i0_i1_fused_i2_fused] * acosf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 15; ++i2) {
        compute_1[(((i0 * 180) + (i1 * 15)) + i2)] = asinhf(ph_0[(((i0 * 180) + (i1 * 15)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2340; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}

