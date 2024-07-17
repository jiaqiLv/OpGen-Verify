void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 13; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      T_add[((ax0_ax1_fused * 12) + ax2)] = ((ph_0[((ax0_ax1_fused * 12) + ax2)] - atanhf(ph_0[((ax0_ax1_fused * 12) + ax2)])) + ph_0[((ax0_ax1_fused * 12) + ax2)]);
    }
  }
  for (int32_t i1 = 0; i1 < 13; ++i1) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute[((i1 * 12) + i2)] = cosf(ph_0[((i1 * 12) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 156; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (sinf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
