void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    float pad_temp[935];
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 55; ++ax3) {
          pad_temp[((ax2 * 55) + ax3)] = ((((1 <= ax2) && (ax2 < 16)) && (1 <= ax3)) ? data[(((((ax0 * 8910) + (ax1 * 810)) + (ax2 * 54)) + ax3) - 55)] : -3.402823e+38f);
        }
      }
      for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 27; ++ax3_1) {
          pool_max[((((ax0 * 2376) + (ax1 * 216)) + (ax2_1 * 27)) + ax3_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 2376) + (ax1 * 216)) + (ax2_1 * 27)) + ax3_1)] = max(pool_max[((((ax0 * 2376) + (ax1 * 216)) + (ax2_1 * 27)) + ax3_1)], pad_temp[((((ax2_1 * 110) + (rv0 * 55)) + (ax3_1 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}
