void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1560; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
        T_divide[(((ax0 * 156) + (ax1 * 13)) + ax2)] = (cosf(ph_0[(((ax0 * 156) + (ax1 * 13)) + ax2)]) / ph_0[(((ax0 * 156) + (ax1 * 13)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 120; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 13; ++i2) {
      compute_1[((i0_i1_fused * 13) + i2)] = acosf(ph_0[((i0_i1_fused * 13) + i2)]);
    }
  }
}

