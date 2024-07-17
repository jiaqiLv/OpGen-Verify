void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        compute[(((i0 * 117) + (i1 * 9)) + i2)] = cosf(ph_0[(((i0 * 117) + (i1 * 9)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_add[(((ax0 * 117) + (ax1 * 9)) + ax2)] = (acoshf(ph_0[(((ax0 * 117) + (ax1 * 9)) + ax2)]) + ph_0[(((ax0 * 117) + (ax1 * 9)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 468; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
}

