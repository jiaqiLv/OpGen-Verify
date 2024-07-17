void default_function_kernel(float* T_add, float* T_mod, float* T_multiply, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 720; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
        T_multiply[(((ax0 * 48) + (ax1 * 4)) + ax2)] = (ph_0[(((ax0 * 48) + (ax1 * 4)) + ax2)] * ph_3[(((ax0 * 48) + (ax1 * 4)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 15; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 12; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
        T_add[(((ax0_1 * 48) + (ax1_1 * 4)) + ax2_1)] = (cosf(ph_0[(((ax0_1 * 48) + (ax1_1 * 4)) + ax2_1)]) + ph_0[(((ax0_1 * 48) + (ax1_1 * 4)) + ax2_1)]);
      }
    }
  }
}

