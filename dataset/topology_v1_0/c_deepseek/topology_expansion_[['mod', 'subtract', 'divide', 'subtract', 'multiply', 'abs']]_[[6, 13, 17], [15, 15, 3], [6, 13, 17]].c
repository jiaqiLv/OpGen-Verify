void default_function_kernel(float* T_multiply, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1326; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] / (ph_0[ax0_ax1_fused_ax2_fused] - ph_3[ax0_ax1_fused_ax2_fused])) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        T_multiply[(((ax0 * 221) + (ax1 * 17)) + ax2)] = ((ph_0[(((ax0 * 221) + (ax1 * 17)) + ax2)] / (ph_0[(((ax0 * 221) + (ax1 * 17)) + ax2)] - ph_3[(((ax0 * 221) + (ax1 * 17)) + ax2)])) * ph_0[(((ax0 * 221) + (ax1 * 17)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1326; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(fmodf(ph_0[i0_i1_fused_i2_fused], ph_3[i0_i1_fused_i2_fused]));
  }
}
