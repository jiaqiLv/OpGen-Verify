void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 672; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
        T_divide[(((ax0 * 56) + (ax1 * 4)) + ax2)] = (acoshf(ph_0[(((ax0 * 56) + (ax1 * 4)) + ax2)]) / ph_0[(((ax0 * 56) + (ax1 * 4)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 168; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      compute_1[((i0_i1_fused * 4) + i2)] = sinf(ph_0[((i0_i1_fused * 4) + i2)]);
    }
  }
}
