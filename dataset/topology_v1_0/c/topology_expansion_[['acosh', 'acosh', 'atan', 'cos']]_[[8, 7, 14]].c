void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute[(((i0 * 98) + (i1 * 14)) + i2)] = acoshf(ph_0[(((i0 * 98) + (i1 * 14)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 784; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanf(acoshf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 784; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = cosf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}
