void default_function_kernel(float* T_multiply, float* T_multiply_1, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 20; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
        T_multiply[(((ax0 * 200) + (ax1 * 10)) + ax2)] = (ph_0[(((ax0 * 200) + (ax1 * 10)) + ax2)] * ph_3[(((ax0 * 200) + (ax1 * 10)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2000; ++ax0_ax1_fused_ax2_fused) {
    T_multiply_1[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 200; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      compute[((i0_i1_fused * 10) + i2)] = acosf(ceilf(ph_0[((i0_i1_fused * 10) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2000; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(ceilf(ph_0[i0_i1_fused_i2_fused]));
  }
}
