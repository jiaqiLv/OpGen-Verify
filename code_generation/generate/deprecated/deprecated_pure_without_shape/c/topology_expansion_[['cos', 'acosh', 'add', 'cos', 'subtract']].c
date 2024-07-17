void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 13; ++i0) {
    for (int32_t i1 = 0; i1 < 9; ++i1) {
      for (int32_t i2 = 0; i2 < 15; ++i2) {
        compute[(((i0 * 135) + (i1 * 15)) + i2)] = cosf(ph_0[(((i0 * 135) + (i1 * 15)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1755; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (acoshf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1755; ++ax0_ax1_fused_ax2_fused_1) {
    T_subtract[ax0_ax1_fused_ax2_fused_1] = (ph_0[ax0_ax1_fused_ax2_fused_1] - cosf(ph_0[ax0_ax1_fused_ax2_fused_1]));
  }
}

