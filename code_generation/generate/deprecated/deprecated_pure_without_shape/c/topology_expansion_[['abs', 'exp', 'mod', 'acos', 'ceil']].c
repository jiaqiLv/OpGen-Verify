void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1960; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 20; ++ax0) {
    float compute_3[1];
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
        compute_3[0] = expf(ph_0[(((ax0 * 98) + (ax1 * 7)) + ax2)]);
        T_mod[(((ax0 * 98) + (ax1 * 7)) + ax2)] = fmodf(compute_3[0], ph_0[(((ax0 * 98) + (ax1 * 7)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1960; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 1960; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = ceilf(ph_0[i0_i1_fused_i2_fused_2]);
  }
}

