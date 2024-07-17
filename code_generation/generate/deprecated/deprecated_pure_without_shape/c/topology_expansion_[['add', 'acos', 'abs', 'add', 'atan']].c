void default_function_kernel(float* T_add, float* T_add_1, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 15; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
        T_add[(((ax0 * 105) + (ax1 * 7)) + ax2)] = (ph_0[(((ax0 * 105) + (ax1 * 7)) + ax2)] + ph_3[(((ax0 * 105) + (ax1 * 7)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 315; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 45; ++ax0_ax1_fused) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      T_add_1[((ax0_ax1_fused * 7) + ax2_1)] = (fabsf(ph_0[((ax0_ax1_fused * 7) + ax2_1)]) + ph_0[((ax0_ax1_fused * 7) + ax2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 315; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

