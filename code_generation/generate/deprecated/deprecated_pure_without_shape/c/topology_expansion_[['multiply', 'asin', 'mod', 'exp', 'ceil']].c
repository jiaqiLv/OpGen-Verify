void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 20; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
      T_multiply[((ax0_ax1_fused * 11) + ax2)] = (ph_0[((ax0_ax1_fused * 11) + ax2)] * ph_3[((ax0_ax1_fused * 11) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 220; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(fmodf(ph_0[i0_i1_fused_i2_fused], asinf(ph_0[i0_i1_fused_i2_fused])));
  }
  for (int32_t i1 = 0; i1 < 20; ++i1) {
    for (int32_t i2 = 0; i2 < 11; ++i2) {
      compute_1[((i1 * 11) + i2)] = ceilf(fmodf(ph_0[((i1 * 11) + i2)], asinf(ph_0[((i1 * 11) + i2)])));
    }
  }
}

