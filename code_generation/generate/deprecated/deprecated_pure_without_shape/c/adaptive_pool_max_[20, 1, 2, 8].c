void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 1280; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    adaptive_pool_max[ax0_ax1_fused_ax2_fused_ax3_fused] = -3.402823e+38f;
    for (int32_t rv0 = 0; rv0 < ((((((((ax0_ax1_fused_ax2_fused_ax3_fused & 63) >> 3) * 2) + 2) % 8) == 0) ? (((ax0_ax1_fused_ax2_fused_ax3_fused & 63) + 8) >> 5) : ((((ax0_ax1_fused_ax2_fused_ax3_fused & 63) + 8) >> 5) + 1)) - ((ax0_ax1_fused_ax2_fused_ax3_fused & 63) >> 5)); ++rv0) {
      adaptive_pool_max[ax0_ax1_fused_ax2_fused_ax3_fused] = max(adaptive_pool_max[ax0_ax1_fused_ax2_fused_ax3_fused], data[((((ax0_ax1_fused_ax2_fused_ax3_fused >> 5) * 8) + (rv0 * 8)) + (ax0_ax1_fused_ax2_fused_ax3_fused & 7))]);
    }
  }
}

