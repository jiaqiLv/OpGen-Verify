void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        compute[(((i0 * 162) + (i1 * 18)) + i2)] = cosf((ph_0[(((i0 * 162) + (i1 * 18)) + i2)] + atanhf(ph_0[(((i0 * 162) + (i1 * 18)) + i2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 144; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute_1[((i0_i1_fused * 18) + i2_1)] = ceilf(ph_0[((i0_i1_fused * 18) + i2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2592; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = asinf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2592; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = sinf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

