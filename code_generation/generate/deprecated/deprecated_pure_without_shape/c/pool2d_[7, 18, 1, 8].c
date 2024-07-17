void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 7; ++ax0) {
    float pad_temp[1350];
    for (int32_t ax1 = 0; ax1 < 18; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
        for (int32_t ax3_s = 0; ax3_s < 25; ++ax3_s) {
          pad_temp[(((ax1 * 75) + (ax2 * 25)) + ax3_s)] = ((((1 <= ax2) && (ax2 < 2)) && (1 <= ax3_s)) ? data[(((((ax0 * 432) + (ax1 * 24)) + (ax2 * 24)) + ax3_s) - 25)] : -3.402823e+38f);
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 18; ++ax1_1) {
      for (int32_t ax3 = 0; ax3 < 12; ++ax3) {
        pool_max[(((ax0 * 216) + (ax1_1 * 12)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            pool_max[(((ax0 * 216) + (ax1_1 * 12)) + ax3)] = max(pool_max[(((ax0 * 216) + (ax1_1 * 12)) + ax3)], pad_temp[((((ax1_1 * 75) + (rv0 * 25)) + (ax3 * 2)) + rv1)]);
          }
        }
      }
    }
  }
}

