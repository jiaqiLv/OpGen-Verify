void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 252; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    adaptive_pool_max[ax0_ax1_fused_ax2_fused_ax3_fused] = -3.402823e+38f;
    for (int32_t rv0 = 0; rv0 < 16; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 18; ++rv1) {
        adaptive_pool_max[ax0_ax1_fused_ax2_fused_ax3_fused] = max(adaptive_pool_max[ax0_ax1_fused_ax2_fused_ax3_fused], data[(((ax0_ax1_fused_ax2_fused_ax3_fused * 288) + (rv0 * 18)) + rv1)]);
      }
    }
  }
}

