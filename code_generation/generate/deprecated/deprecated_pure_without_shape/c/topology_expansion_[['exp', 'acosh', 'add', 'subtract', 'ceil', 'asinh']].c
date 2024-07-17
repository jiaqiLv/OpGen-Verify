void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 540; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
        T_subtract[(((ax0 * 54) + (ax1 * 18)) + ax2)] = (0.000000e+00f - acoshf(ph_0[(((ax0 * 54) + (ax1 * 18)) + ax2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        compute_1[(((i0 * 54) + (i1 * 18)) + i2)] = asinhf(ceilf(ph_0[(((i0 * 54) + (i1 * 18)) + i2)]));
      }
    }
  }
}

