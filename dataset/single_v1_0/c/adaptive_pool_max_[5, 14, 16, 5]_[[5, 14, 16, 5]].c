void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 70; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        adaptive_pool_max[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
          for (int32_t rv1 = 0; rv1 < ((((((ax3 * 5) + 5) % 8) == 0) ? (((ax3 * 5) + 5) >> 3) : ((((ax3 * 5) + 5) >> 3) + 1)) - ((ax3 * 5) >> 3)); ++rv1) {
            adaptive_pool_max[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)] = max(adaptive_pool_max[(((ax0_ax1_fused * 64) + (ax2 * 8)) + ax3)], data[(((((ax0_ax1_fused * 80) + (ax2 * 10)) + (rv0 * 5)) + ((ax3 * 5) >> 3)) + rv1)]);
          }
        }
      }
    }
  }
}

