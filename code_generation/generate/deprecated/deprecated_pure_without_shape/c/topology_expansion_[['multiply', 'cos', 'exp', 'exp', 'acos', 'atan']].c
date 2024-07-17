void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_3) {
  float compute_4[2964];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2964; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2964; ++i0_i1_fused_i2_fused_1) {
    compute_4[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 2964; ++i0_i1_fused_i2_fused_2) {
    compute_1[i0_i1_fused_i2_fused_2] = expf(compute_4[i0_i1_fused_i2_fused_2]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        compute_2[(((i0 * 156) + (i1 * 12)) + i2)] = acosf(compute_4[(((i0 * 156) + (i1 * 12)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 247; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 12; ++i2_1) {
      compute_3[((i0_i1_fused * 12) + i2_1)] = atanf((ph_0[((i0_i1_fused * 12) + i2_1)] * ph_3[((i0_i1_fused * 12) + i2_1)]));
    }
  }
}
