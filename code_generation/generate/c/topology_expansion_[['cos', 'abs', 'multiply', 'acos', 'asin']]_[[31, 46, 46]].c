void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 65596; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 31; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 46; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 46; ++ax2) {
        T_multiply[(((ax0 * 2116) + (ax1 * 46)) + ax2)] = (fabsf(ph_0[(((ax0 * 2116) + (ax1 * 46)) + ax2)]) * ph_0[(((ax0 * 2116) + (ax1 * 46)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 1426; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 46; ++i2) {
      compute_1[((i0_i1_fused * 46) + i2)] = acosf(ph_0[((i0_i1_fused * 46) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 1426; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 46; ++i2_1) {
      compute_2[((i0_i1_fused_1 * 46) + i2_1)] = asinf(ph_0[((i0_i1_fused_1 * 46) + i2_1)]);
    }
  }
}
