void default_function_kernel(float* T_add, float* T_divide, float* T_divide_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 208; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      T_add[((ax0_ax1_fused * 15) + ax2)] = (ph_0[((ax0_ax1_fused * 15) + ax2)] + ph_3[((ax0_ax1_fused * 15) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2_1 = 0; ax2_1 < 15; ++ax2_1) {
        T_divide[(((ax0 * 195) + (ax1 * 15)) + ax2_1)] = (ph_0[(((ax0 * 195) + (ax1 * 15)) + ax2_1)] / ph_3[(((ax0 * 195) + (ax1 * 15)) + ax2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3120; ++ax0_ax1_fused_ax2_fused) {
    T_divide_1[ax0_ax1_fused_ax2_fused] = (sinf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

