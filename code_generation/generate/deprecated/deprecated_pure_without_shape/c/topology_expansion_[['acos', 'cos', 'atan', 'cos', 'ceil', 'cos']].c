void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 240; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute[((i0_i1_fused * 18) + i2)] = acosf(ph_0[((i0_i1_fused * 18) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4320; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4320; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = cosf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 4320; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = cosf(ceilf(ph_0[i0_i1_fused_i2_fused_2]));
  }
}

