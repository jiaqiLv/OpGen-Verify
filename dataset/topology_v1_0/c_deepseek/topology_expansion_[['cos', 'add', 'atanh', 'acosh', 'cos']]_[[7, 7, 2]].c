void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 49; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      compute[((i0_i1_fused * 2) + i2)] = atanhf((ph_0[((i0_i1_fused * 2) + i2)] + cosf(ph_0[((i0_i1_fused * 2) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
        compute_1[(((i0 * 14) + (i1 * 2)) + i2_1)] = acoshf(ph_0[(((i0 * 14) + (i1 * 2)) + i2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 98; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
}
