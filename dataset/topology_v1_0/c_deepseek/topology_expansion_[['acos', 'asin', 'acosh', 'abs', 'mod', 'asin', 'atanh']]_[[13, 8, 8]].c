void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 832; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 104; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      compute_1[((i0_i1_fused * 8) + i2)] = acoshf(asinf(ph_0[((i0_i1_fused * 8) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 104; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      compute_2[((i0_i1_fused_1 * 8) + i2_1)] = asinf(fmodf(ph_0[((i0_i1_fused_1 * 8) + i2_1)], fabsf(ph_0[((i0_i1_fused_1 * 8) + i2_1)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
        compute_3[(((i0 * 64) + (i1 * 8)) + i2_2)] = atanhf(fmodf(ph_0[(((i0 * 64) + (i1 * 8)) + i2_2)], fabsf(ph_0[(((i0 * 64) + (i1 * 8)) + i2_2)])));
      }
    }
  }
}
