void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 48; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    float adaptive_pool_sum[1];
    adaptive_pool_sum[0] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 14; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 10; ++rv1) {
        adaptive_pool_sum[0] = (adaptive_pool_sum[0] + data[(((ax0_ax1_fused_ax2_fused_ax3_fused * 140) + (rv0 * 10)) + rv1)]);
      }
    }
    adaptive_pool_avg[ax0_ax1_fused_ax2_fused_ax3_fused] = (adaptive_pool_sum[0] * 7.142857e-03f);
  }
}
