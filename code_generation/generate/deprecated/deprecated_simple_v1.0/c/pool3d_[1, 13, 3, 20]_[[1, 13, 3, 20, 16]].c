void default_function_kernel(float* data, float* pool_max) {
  float pad_temp[27];
  for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        for (int32_t ax4 = 0; ax4 < 8; ++ax4) {
          for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
            for (int32_t ax3_1 = 0; ax3_1 < 3; ++ax3_1) {
              for (int32_t ax4_s = 0; ax4_s < 3; ++ax4_s) {
                pad_temp[(((ax2_1 * 9) + (ax3_1 * 3)) + ax4_s)] = (((((1 <= ((ax2 * 2) + ax2_1)) && (((ax2_1 >> 1) + ax2) < 2)) && (1 <= ((ax3 * 2) + ax3_1))) && (1 <= ((ax4 * 2) + ax4_s))) ? data[((((((((ax1 * 960) + (ax2 * 640)) + (ax2_1 * 320)) + (ax3 * 32)) + (ax3_1 * 16)) + (ax4 * 2)) + ax4_s) - 337)] : -3.402823e+38f);
              }
            }
          }
          pool_max[((((ax1 * 160) + (ax2 * 80)) + (ax3 * 8)) + ax4)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              for (int32_t rv2 = 0; rv2 < 3; ++rv2) {
                pool_max[((((ax1 * 160) + (ax2 * 80)) + (ax3 * 8)) + ax4)] = max(pool_max[((((ax1 * 160) + (ax2 * 80)) + (ax3 * 8)) + ax4)], pad_temp[(((rv0 * 9) + (rv1 * 3)) + rv2)]);
              }
            }
          }
        }
      }
    }
  }
}
