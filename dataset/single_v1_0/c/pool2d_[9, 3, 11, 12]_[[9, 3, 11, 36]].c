void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 9; ++ax0) {
    float pad_temp[9];
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 18; ++ax3) {
          for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
            for (int32_t ax3_s = 0; ax3_s < 3; ++ax3_s) {
              pad_temp[((ax2_1 * 3) + ax3_s)] = ((((1 <= ((ax2 * 2) + ax2_1)) && (((ax2_1 >> 1) + ax2) < 6)) && (1 <= ((ax3 * 2) + ax3_s))) ? data[(((((((ax0 * 1188) + (ax1 * 396)) + (ax2 * 72)) + (ax2_1 * 36)) + (ax3 * 2)) + ax3_s) - 37)] : -3.402823e+38f);
            }
          }
          pool_max[((((ax0 * 324) + (ax1 * 108)) + (ax2 * 18)) + ax3)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 324) + (ax1 * 108)) + (ax2 * 18)) + ax3)] = max(pool_max[((((ax0 * 324) + (ax1 * 108)) + (ax2 * 18)) + ax3)], pad_temp[((rv0 * 3) + rv1)]);
            }
          }
        }
      }
    }
  }
}

