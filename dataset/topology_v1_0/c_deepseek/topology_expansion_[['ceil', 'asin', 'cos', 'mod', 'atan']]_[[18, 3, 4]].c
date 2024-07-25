void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 3; ++i1) {
      for (int32_t i2 = 0; i2 < 4; ++i2) {
        compute[(((i0 * 12) + (i1 * 4)) + i2)] = ceilf(ph_0[(((i0 * 12) + (i1 * 4)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
        T_mod[(((ax0 * 12) + (ax1 * 4)) + ax2)] = fmodf(ph_0[(((ax0 * 12) + (ax1 * 4)) + ax2)], cosf(asinf(ph_0[(((ax0 * 12) + (ax1 * 4)) + ax2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 216; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
}

