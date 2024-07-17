void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 20; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
          adaptive_pool_max[((((ax0 * 1280) + (ax1 * 64)) + (ax2 * 8)) + ax3)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < ((((((ax2 * 6) + 6) % 8) == 0) ? (((ax2 * 7) + 7) >> 2) : ((((ax2 * 7) + 7) >> 2) + 1)) - ((ax2 * 14) >> 3)); ++rv0) {
            for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
              adaptive_pool_max[((((ax0 * 1280) + (ax1 * 64)) + (ax2 * 8)) + ax3)] = max(adaptive_pool_max[((((ax0 * 1280) + (ax1 * 64)) + (ax2 * 8)) + ax3)], data[((((((ax0 * 4480) + (ax1 * 224)) + (((ax2 * 14) >> 3) * 16)) + (rv0 * 16)) + (ax3 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

