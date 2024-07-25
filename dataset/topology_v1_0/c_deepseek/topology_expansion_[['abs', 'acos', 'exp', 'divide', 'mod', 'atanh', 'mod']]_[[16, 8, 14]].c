void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0) {
  float compute_2[1792];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1792; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1792; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = expf(acosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 128; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      compute_1[((i0_i1_fused * 14) + i2)] = atanhf(fmodf(ph_0[((i0_i1_fused * 14) + i2)], (ph_0[((i0_i1_fused * 14) + i2)] / compute_2[((i0_i1_fused * 14) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
        T_mod[(((ax0 * 112) + (ax1 * 14)) + ax2)] = fmodf(fmodf(ph_0[(((ax0 * 112) + (ax1 * 14)) + ax2)], (ph_0[(((ax0 * 112) + (ax1 * 14)) + ax2)] / compute_2[(((ax0 * 112) + (ax1 * 14)) + ax2)])), ph_0[(((ax0 * 112) + (ax1 * 14)) + ax2)]);
      }
    }
  }
}

