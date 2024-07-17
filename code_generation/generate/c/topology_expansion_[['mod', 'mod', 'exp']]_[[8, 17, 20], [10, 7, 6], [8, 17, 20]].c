void default_function_kernel(float* T_mod, float* T_mod_1, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 8; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 17; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
        T_mod[(((ax0 * 340) + (ax1 * 20)) + ax2)] = fmodf(ph_0[(((ax0 * 340) + (ax1 * 20)) + ax2)], ph_3[(((ax0 * 340) + (ax1 * 20)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 8; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 17; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 20; ++ax2_1) {
        T_mod_1[(((ax0_1 * 340) + (ax1_1 * 20)) + ax2_1)] = fmodf(ph_0[(((ax0_1 * 340) + (ax1_1 * 20)) + ax2_1)], ph_3[(((ax0_1 * 340) + (ax1_1 * 20)) + ax2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2720; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
}
