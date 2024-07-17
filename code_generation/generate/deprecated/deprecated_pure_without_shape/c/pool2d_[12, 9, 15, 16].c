void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    float pad_temp[833];
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        for (int32_t ax3_s = 0; ax3_s < 49; ++ax3_s) {
          pad_temp[((ax2 * 49) + ax3_s)] = ((((1 <= ax2) && (ax2 < 16)) && (1 <= ax3_s)) ? data[(((((ax0 * 6480) + (ax1 * 720)) + (ax2 * 48)) + ax3_s) - 49)] : -3.402823e+38f);
        }
      }
      for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
        for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
          pool_max[((((ax0 * 1728) + (ax1 * 192)) + (ax2_1 * 24)) + ax3)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 1728) + (ax1 * 192)) + (ax2_1 * 24)) + ax3)] = max(pool_max[((((ax0 * 1728) + (ax1 * 192)) + (ax2_1 * 24)) + ax3)], pad_temp[((((ax2_1 * 98) + (rv0 * 49)) + (ax3 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

