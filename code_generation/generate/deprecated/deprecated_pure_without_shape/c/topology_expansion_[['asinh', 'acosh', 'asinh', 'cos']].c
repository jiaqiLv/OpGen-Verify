void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 540; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        compute_1[(((i0 * 108) + (i1 * 6)) + i2)] = asinhf(acoshf(ph_0[(((i0 * 108) + (i1 * 6)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 5; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 18; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
        compute_2[(((i0_1 * 108) + (i1_1 * 6)) + i2_1)] = cosf(ph_0[(((i0_1 * 108) + (i1_1 * 6)) + i2_1)]);
      }
    }
  }
}

