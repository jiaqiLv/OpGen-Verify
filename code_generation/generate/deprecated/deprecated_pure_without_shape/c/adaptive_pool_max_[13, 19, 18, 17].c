void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 247; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        adaptive_pool_max[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < ((((((ax2 * 2) + 2) % 8) == 0) ? (((ax2 * 9) + 9) >> 2) : ((((ax2 * 9) + 9) >> 2) + 1)) - ((ax2 * 18) >> 3)); ++rv0) {
          for (int32_t rv1 = 0; rv1 < (((((ax3 + 1) % 8) == 0) ? (((ax3 * 17) + 17) >> 3) : ((((ax3 * 17) + 17) >> 3) + 1)) - (ax3 * 2)); ++rv1) {
            adaptive_pool_max[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)] = max(adaptive_pool_max[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)], data[(((((ax0_ax1_fused * 306) + (((ax2 * 18) >> 3) * 17)) + (rv0 * 17)) + (ax3 * 2)) + rv1)]);
          }
        }
      }
    }
  }
}

