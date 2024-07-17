void default_function_kernel(float* T_multiply, float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 216; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
        T_subtract[(((ax0 * 72) + (ax1 * 8)) + ax2)] = (asinf(ph_0[(((ax0 * 72) + (ax1 * 8)) + ax2)]) - ph_0[(((ax0 * 72) + (ax1 * 8)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 216; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinhf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 27; ++ax0_ax1_fused) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      T_multiply[((ax0_ax1_fused * 8) + ax2_1)] = (asinhf(ph_0[((ax0_ax1_fused * 8) + ax2_1)]) * ph_0[((ax0_ax1_fused * 8) + ax2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 216; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = expf(asinhf(ph_0[i0_i1_fused_i2_fused_2]));
  }
}

