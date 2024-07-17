void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 12; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        compute[(((i0 * 72) + (i1 * 6)) + i2)] = acosf(ph_0[(((i0 * 72) + (i1 * 6)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 192; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      compute_1[((i0_i1_fused * 6) + i2_1)] = asinhf(ph_0[((i0_i1_fused * 6) + i2_1)]);
    }
  }
}

