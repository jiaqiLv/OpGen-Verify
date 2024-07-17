void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 48; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      compute[((i0_i1_fused * 3) + i2)] = asinhf(ph_0[((i0_i1_fused * 3) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 3; ++i2_1) {
        compute_1[(((i0 * 24) + (i1 * 3)) + i2_1)] = fabsf(acoshf(ph_0[(((i0 * 24) + (i1 * 3)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 144; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
}
