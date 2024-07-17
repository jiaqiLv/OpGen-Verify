void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 576; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    float compute_2[1];
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
        compute_2[0] = expf(sinf(ph_0[(((ax0 * 36) + (ax1 * 12)) + ax2)]));
        T_subtract[(((ax0 * 36) + (ax1 * 12)) + ax2)] = (ph_0[(((ax0 * 36) + (ax1 * 12)) + ax2)] - compute_2[0]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 576; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = sinf(sinf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}
