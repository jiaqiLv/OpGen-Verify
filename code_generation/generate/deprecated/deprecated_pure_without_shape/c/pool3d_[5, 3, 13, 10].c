void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    float pad_temp[561];
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
        for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
          for (int32_t ax3 = 0; ax3 < 11; ++ax3) {
            for (int32_t ax4 = 0; ax4 < 17; ++ax4) {
              pad_temp[(((ax2_1 * 187) + (ax3 * 17)) + ax4)] = (((((1 <= ((ax2 * 2) + ax2_1)) && (((ax2_1 >> 1) + ax2) < 7)) && (1 <= ax3)) && (1 <= ax4)) ? data[(((((((ax0 * 6240) + (ax1 * 2080)) + (ax2 * 320)) + (ax2_1 * 160)) + (ax3 * 16)) + ax4) - 177)] : -3.402823e+38f);
            }
          }
        }
        for (int32_t ax3_1 = 0; ax3_1 < 5; ++ax3_1) {
          for (int32_t ax4_1 = 0; ax4_1 < 8; ++ax4_1) {
            pool_max[(((((ax0 * 840) + (ax1 * 280)) + (ax2 * 40)) + (ax3_1 * 8)) + ax4_1)] = -3.402823e+38f;
            for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
              for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
                for (int32_t rv2 = 0; rv2 < 3; ++rv2) {
                  pool_max[(((((ax0 * 840) + (ax1 * 280)) + (ax2 * 40)) + (ax3_1 * 8)) + ax4_1)] = max(pool_max[(((((ax0 * 840) + (ax1 * 280)) + (ax2 * 40)) + (ax3_1 * 8)) + ax4_1)], pad_temp[(((((rv0 * 187) + (ax3_1 * 34)) + (rv1 * 17)) + (ax4_1 * 2)) + rv2)]);
                }
              }
            }
          }
        }
      }
    }
  }
}

