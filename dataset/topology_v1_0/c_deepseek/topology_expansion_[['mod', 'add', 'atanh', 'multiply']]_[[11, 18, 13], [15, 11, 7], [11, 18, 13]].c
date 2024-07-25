void default_function_kernel(float* T_add, float* T_mod, float* T_multiply, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2574; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 18; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
        T_add[(((ax0 * 234) + (ax1 * 13)) + ax2)] = (ph_0[(((ax0 * 234) + (ax1 * 13)) + ax2)] + ph_3[(((ax0 * 234) + (ax1 * 13)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 11; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 18; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 13; ++ax2_1) {
        T_multiply[(((ax0_1 * 234) + (ax1_1 * 13)) + ax2_1)] = (atanhf(ph_0[(((ax0_1 * 234) + (ax1_1 * 13)) + ax2_1)]) * ph_0[(((ax0_1 * 234) + (ax1_1 * 13)) + ax2_1)]);
      }
    }
  }
}

