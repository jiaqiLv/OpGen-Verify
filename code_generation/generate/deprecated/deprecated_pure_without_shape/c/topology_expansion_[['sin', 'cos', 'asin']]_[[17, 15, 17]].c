void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        compute[(((i0 * 255) + (i1 * 17)) + i2)] = sinf(ph_0[(((i0 * 255) + (i1 * 17)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4335; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinf(cosf(ph_0[i0_i1_fused_i2_fused]));
  }
}

