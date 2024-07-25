void default_function_kernel(float* T_add, float* T_divide, float* T_mod, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        T_mod[(((ax0 * 76) + (ax1 * 19)) + ax2)] = fmodf(ph_0[(((ax0 * 76) + (ax1 * 19)) + ax2)], ph_3[(((ax0 * 76) + (ax1 * 19)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 5; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 19; ++ax2_1) {
        T_divide[(((ax0_1 * 76) + (ax1_1 * 19)) + ax2_1)] = (fmodf(ph_0[(((ax0_1 * 76) + (ax1_1 * 19)) + ax2_1)], atanf(ph_0[(((ax0_1 * 76) + (ax1_1 * 19)) + ax2_1)])) / ph_0[(((ax0_1 * 76) + (ax1_1 * 19)) + ax2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 380; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (fmodf(ph_0[ax0_ax1_fused_ax2_fused], atanf(ph_0[ax0_ax1_fused_ax2_fused])) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
