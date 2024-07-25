void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 5; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 10; ++i2) {
        compute[(((i0 * 70) + (i1 * 10)) + i2)] = sinf(ph_0[(((i0 * 70) + (i1 * 10)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 35; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 10; ++i2_1) {
      compute_1[((i0_i1_fused * 10) + i2_1)] = ceilf(acoshf(ph_0[((i0_i1_fused * 10) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 350; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
}
