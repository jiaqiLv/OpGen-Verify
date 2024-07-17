void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1496; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      adaptive_pool_max[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < ((((((ax0_ax1_fused_ax2_fused & 7) + 1) % 8) == 0) ? ((((ax0_ax1_fused_ax2_fused & 7) * 9) + 9) >> 3) : (((((ax0_ax1_fused_ax2_fused & 7) * 9) + 9) >> 3) + 1)) - (ax0_ax1_fused_ax2_fused & 7)); ++rv0) {
        for (int32_t rv1 = 0; rv1 < ((((((ax3 * 2) + 2) % 8) == 0) ? (((ax3 * 9) + 9) >> 2) : ((((ax3 * 9) + 9) >> 2) + 1)) - ((ax3 * 18) >> 3)); ++rv1) {
          adaptive_pool_max[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = max(adaptive_pool_max[((ax0_ax1_fused_ax2_fused * 8) + ax3)], data[((((((ax0_ax1_fused_ax2_fused >> 3) * 162) + (rv0 * 18)) + ((ax0_ax1_fused_ax2_fused & 7) * 18)) + ((ax3 * 18) >> 3)) + rv1)]);
        }
      }
    }
  }
}
