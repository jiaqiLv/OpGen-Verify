void default_function_kernel(float* compute_10, float* compute_12, float* compute_14, float* compute_6, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3496; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 98; ++i2) {
      compute_6[((i0_i1_fused * 98) + i2)] = acoshf(ph_0[((i0_i1_fused * 98) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 342608; ++i0_i1_fused_i2_fused) {
    compute_10[i0_i1_fused_i2_fused] = acoshf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 3496; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 98; ++i2_1) {
      compute_12[((i0_i1_fused_1 * 98) + i2_1)] = ceilf(cosf(ph_0[((i0_i1_fused_1 * 98) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 342608; ++i0_i1_fused_i2_fused_1) {
    compute_14[i0_i1_fused_i2_fused_1] = fabsf((ph_0[i0_i1_fused_i2_fused_1] - ph_3[i0_i1_fused_i2_fused_1]));
  }
}

