void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 45; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_divide[((ax0_ax1_fused * 20) + ax2)] = (ph_0[((ax0_ax1_fused * 20) + ax2)] / ph_3[((ax0_ax1_fused * 20) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 3; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        compute[(((i0 * 300) + (i1 * 20)) + i2)] = ceilf(ph_0[(((i0 * 300) + (i1 * 20)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 900; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (sinf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
