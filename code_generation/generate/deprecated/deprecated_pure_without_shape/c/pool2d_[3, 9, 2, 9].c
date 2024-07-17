void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    float pad_temp[9];
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
          for (int32_t ax3_s = 0; ax3_s < 3; ++ax3_s) {
            pad_temp[((ax2 * 3) + ax3_s)] = ((((1 <= ax2) && (1 <= ((ax3 * 2) + ax3_s))) && (((ax3_s >> 1) + ax3) < 14)) ? data[((((((ax0 * 486) + (ax1 * 54)) + (ax2 * 27)) + (ax3 * 2)) + ax3_s) - 28)] : -3.402823e+38f);
          }
        }
        pool_max[(((ax0 * 126) + (ax1 * 14)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            pool_max[(((ax0 * 126) + (ax1 * 14)) + ax3)] = max(pool_max[(((ax0 * 126) + (ax1 * 14)) + ax3)], pad_temp[((rv0 * 3) + rv1)]);
          }
        }
      }
    }
  }
}

