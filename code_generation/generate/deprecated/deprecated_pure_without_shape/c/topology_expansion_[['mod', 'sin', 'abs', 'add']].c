void default_function_kernel(float* T_add, float* T_mod, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        T_mod[(((ax0 * 65) + (ax1 * 5)) + ax2)] = fmodf(ph_0[(((ax0 * 65) + (ax1 * 5)) + ax2)], ph_3[(((ax0 * 65) + (ax1 * 5)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 195; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 3; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 13; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
        T_add[(((ax0_1 * 65) + (ax1_1 * 5)) + ax2_1)] = (fabsf(ph_0[(((ax0_1 * 65) + (ax1_1 * 5)) + ax2_1)]) + ph_0[(((ax0_1 * 65) + (ax1_1 * 5)) + ax2_1)]);
      }
    }
  }
}

