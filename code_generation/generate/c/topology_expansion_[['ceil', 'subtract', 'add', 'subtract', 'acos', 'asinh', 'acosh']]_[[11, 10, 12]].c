void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
        T_subtract[(((ax0 * 120) + (ax1 * 12)) + ax2)] = (0.000000e+00f - (ph_0[(((ax0 * 120) + (ax1 * 12)) + ax2)] - ceilf(ph_0[(((ax0 * 120) + (ax1 * 12)) + ax2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 110; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute[((i0_i1_fused * 12) + i2)] = asinhf(acosf(ph_0[((i0_i1_fused * 12) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1320; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acoshf(acosf(ph_0[i0_i1_fused_i2_fused]));
  }
}

