void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 693; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        compute_1[(((i0 * 99) + (i1 * 9)) + i2)] = atanhf(asinf(ph_0[(((i0 * 99) + (i1 * 9)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 77; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 9; ++i2_1) {
      compute_2[((i0_i1_fused * 9) + i2_1)] = asinf(asinf(ph_0[((i0_i1_fused * 9) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 693; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = atanf((ph_0[i0_i1_fused_i2_fused_1] * ph_3[i0_i1_fused_i2_fused_1]));
  }
}

