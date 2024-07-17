void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 504; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        compute_1[(((i0 * 84) + (i1 * 12)) + i2)] = fabsf(acoshf(ph_0[(((i0 * 84) + (i1 * 12)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 6; ++i0_1) {
    for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 12; ++i2_1) {
        compute_2[(((i0_1 * 84) + (i1_1 * 12)) + i2_1)] = fabsf(fmodf(ph_0[(((i0_1 * 84) + (i1_1 * 12)) + i2_1)], asinf(ph_0[(((i0_1 * 84) + (i1_1 * 12)) + i2_1)])));
      }
    }
  }
}

