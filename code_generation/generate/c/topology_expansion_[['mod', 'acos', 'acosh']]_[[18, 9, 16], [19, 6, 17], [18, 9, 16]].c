void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
        T_mod[(((ax0 * 144) + (ax1 * 16)) + ax2)] = fmodf(ph_0[(((ax0 * 144) + (ax1 * 16)) + ax2)], ph_3[(((ax0 * 144) + (ax1 * 16)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2592; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 162; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      compute_1[((i0_i1_fused * 16) + i2)] = acoshf(ph_0[((i0_i1_fused * 16) + i2)]);
    }
  }
}

