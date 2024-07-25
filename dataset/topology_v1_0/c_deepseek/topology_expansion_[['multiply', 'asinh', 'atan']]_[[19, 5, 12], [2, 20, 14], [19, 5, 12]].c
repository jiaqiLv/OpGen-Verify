void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 5; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
        T_multiply[(((ax0 * 60) + (ax1 * 12)) + ax2)] = (ph_0[(((ax0 * 60) + (ax1 * 12)) + ax2)] * ph_3[(((ax0 * 60) + (ax1 * 12)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1140; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 95; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute_1[((i0_i1_fused * 12) + i2)] = atanf(ph_0[((i0_i1_fused * 12) + i2)]);
    }
  }
}

