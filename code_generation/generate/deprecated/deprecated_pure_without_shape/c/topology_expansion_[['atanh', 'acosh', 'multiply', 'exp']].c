void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 121; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 11; ++i2) {
      compute[((i0_i1_fused * 11) + i2)] = atanhf(ph_0[((i0_i1_fused * 11) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
        T_multiply[(((ax0 * 121) + (ax1 * 11)) + ax2)] = (acoshf(ph_0[(((ax0 * 121) + (ax1 * 11)) + ax2)]) * ph_0[(((ax0 * 121) + (ax1 * 11)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1331; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
}

