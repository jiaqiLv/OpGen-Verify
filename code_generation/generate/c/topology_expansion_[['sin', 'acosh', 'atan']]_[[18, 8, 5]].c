void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute[(((i0 * 40) + (i1 * 5)) + i2)] = sinf(ph_0[(((i0 * 40) + (i1 * 5)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 720; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanf(acoshf(ph_0[i0_i1_fused_i2_fused]));
  }
}

