void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 399; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 7; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        T_multiply[(((ax0 * 57) + (ax1 * 19)) + ax2)] = (atanf(ph_0[(((ax0 * 57) + (ax1 * 19)) + ax2)]) * ph_0[(((ax0 * 57) + (ax1 * 19)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 21; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute_1[((i0_i1_fused * 19) + i2)] = asinf(ph_0[((i0_i1_fused * 19) + i2)]);
    }
  }
}

