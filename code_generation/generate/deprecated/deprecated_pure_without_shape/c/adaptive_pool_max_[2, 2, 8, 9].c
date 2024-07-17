void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      adaptive_pool_max[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = -3.402823e+38f;
      for (int32_t rv1 = 0; rv1 < (((((ax3 + 1) % 8) == 0) ? (((ax3 * 9) + 9) >> 3) : ((((ax3 * 9) + 9) >> 3) + 1)) - ax3); ++rv1) {
        adaptive_pool_max[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = max(adaptive_pool_max[((ax0_ax1_fused_ax2_fused * 8) + ax3)], data[(((ax0_ax1_fused_ax2_fused * 9) + ax3) + rv1)]);
      }
    }
  }
}

