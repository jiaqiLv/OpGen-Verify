void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    float pad_temp[10710];
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 21; ++ax3) {
          for (int32_t ax4 = 0; ax4 < 17; ++ax4) {
            pad_temp[((((ax1 * 1071) + (ax2 * 357)) + (ax3 * 17)) + ax4)] = ((((((1 <= ax2) && (ax2 < 2)) && (1 <= ax3)) && (ax3 < 20)) && (1 <= ax4)) ? data[((((((ax0 * 3040) + (ax1 * 304)) + (ax2 * 304)) + (ax3 * 16)) + ax4) - 321)] : -3.402823e+38f);
          }
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 10; ++ax1_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 10; ++ax3_1) {
        for (int32_t ax4_1 = 0; ax4_1 < 8; ++ax4_1) {
          pool_max[((((ax0 * 800) + (ax1_1 * 80)) + (ax3_1 * 8)) + ax4_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              for (int32_t rv2 = 0; rv2 < 3; ++rv2) {
                pool_max[((((ax0 * 800) + (ax1_1 * 80)) + (ax3_1 * 8)) + ax4_1)] = max(pool_max[((((ax0 * 800) + (ax1_1 * 80)) + (ax3_1 * 8)) + ax4_1)], pad_temp[((((((ax1_1 * 1071) + (rv0 * 357)) + (ax3_1 * 34)) + (rv1 * 17)) + (ax4_1 * 2)) + rv2)]);
              }
            }
          }
        }
      }
    }
  }
}

