void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 114; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      compute[((i0_i1_fused * 9) + i2)] = acoshf((ph_0[((i0_i1_fused * 9) + i2)] / acoshf(ph_0[((i0_i1_fused * 9) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1026; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 19; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 9; ++i2_1) {
        compute_2[(((i0 * 171) + (i1 * 9)) + i2_1)] = fabsf(ceilf(ph_0[(((i0 * 171) + (i1 * 9)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1026; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = acosf(ceilf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}
