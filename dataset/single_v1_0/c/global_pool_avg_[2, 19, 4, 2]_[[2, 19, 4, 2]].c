void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 38; ++ax0_ax1_fused_ax2_fused) {
    float adaptive_pool_sum[1];
    adaptive_pool_sum[0] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 4; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
        adaptive_pool_sum[0] = (adaptive_pool_sum[0] + data[(((ax0_ax1_fused_ax2_fused * 8) + (rv0 * 2)) + rv1)]);
      }
    }
    adaptive_pool_avg[ax0_ax1_fused_ax2_fused] = (adaptive_pool_sum[0] * 1.250000e-01f);
  }
}

