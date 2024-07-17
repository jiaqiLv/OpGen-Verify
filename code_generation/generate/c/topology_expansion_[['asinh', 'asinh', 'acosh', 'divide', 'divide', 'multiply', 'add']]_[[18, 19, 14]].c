void default_function_kernel(float* T_add, float* T_multiply, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 342; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      compute[((i0_i1_fused * 14) + i2)] = asinhf(ph_0[((i0_i1_fused * 14) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 19; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
        T_multiply[(((ax0 * 266) + (ax1 * 14)) + ax2)] = ((ph_0[(((ax0 * 266) + (ax1 * 14)) + ax2)] / (ph_0[(((ax0 * 266) + (ax1 * 14)) + ax2)] / acoshf(asinhf(ph_0[(((ax0 * 266) + (ax1 * 14)) + ax2)])))) * ph_0[(((ax0 * 266) + (ax1 * 14)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4788; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] / (ph_0[ax0_ax1_fused_ax2_fused] / acoshf(asinhf(ph_0[ax0_ax1_fused_ax2_fused])))) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

