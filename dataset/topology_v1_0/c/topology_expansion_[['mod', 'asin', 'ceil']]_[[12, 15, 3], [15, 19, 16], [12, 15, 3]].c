void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 15; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
        T_mod[(((ax0 * 45) + (ax1 * 3)) + ax2)] = fmodf(ph_0[(((ax0 * 45) + (ax1 * 3)) + ax2)], ph_3[(((ax0 * 45) + (ax1 * 3)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 180; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      compute[((i0_i1_fused * 3) + i2)] = asinf(ph_0[((i0_i1_fused * 3) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 540; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
}
