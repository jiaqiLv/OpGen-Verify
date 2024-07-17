void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 720; ++ax0_ax1_fused_ax2_fused) {
    float adaptive_pool_sum[1];
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      adaptive_pool_sum[0] = 0.000000e+00f;
      for (int32_t rv0 = 0; rv0 < (((((((ax0_ax1_fused_ax2_fused & 7) * 3) + 3) % 8) == 0) ? ((((ax0_ax1_fused_ax2_fused & 7) * 3) + 3) >> 3) : (((((ax0_ax1_fused_ax2_fused & 7) * 3) + 3) >> 3) + 1)) - (((ax0_ax1_fused_ax2_fused & 7) * 3) >> 3)); ++rv0) {
        for (int32_t rv1 = 0; rv1 < (((((ax3 + 1) % 8) == 0) ? (((ax3 * 9) + 9) >> 3) : ((((ax3 * 9) + 9) >> 3) + 1)) - ax3); ++rv1) {
          adaptive_pool_sum[0] = (adaptive_pool_sum[0] + data[((((((ax0_ax1_fused_ax2_fused >> 3) * 27) + ((((ax0_ax1_fused_ax2_fused & 7) * 3) >> 3) * 9)) + (rv0 * 9)) + ax3) + rv1)]);
        }
      }
      adaptive_pool_avg[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = (adaptive_pool_sum[0] / (((float)(((((((ax0_ax1_fused_ax2_fused & 7) * 3) + 3) % 8) == 0) ? ((((ax0_ax1_fused_ax2_fused & 7) * 3) + 3) >> 3) : (((((ax0_ax1_fused_ax2_fused & 7) * 3) + 3) >> 3) + 1)) - (((ax0_ax1_fused_ax2_fused & 7) * 3) >> 3))) * ((float)(((((ax3 + 1) % 8) == 0) ? (((ax3 * 9) + 9) >> 3) : ((((ax3 * 9) + 9) >> 3) + 1)) - ax3))));
    }
  }
}

