void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    float pad_temp[105];
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
        for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
          for (int32_t ax3 = 0; ax3 < 35; ++ax3) {
            pad_temp[((ax2_1 * 35) + ax3)] = ((((1 <= ((ax2 * 2) + ax2_1)) && (1 <= ax3)) && (ax3 < 34)) ? data[((((((ax0 * 1386) + (ax1 * 462)) + (ax2 * 66)) + (ax2_1 * 33)) + ax3) - 34)] : -3.402823e+38f);
          }
        }
        for (int32_t ax3_1 = 0; ax3_1 < 17; ++ax3_1) {
          pool_max[((((ax0 * 357) + (ax1 * 119)) + (ax2 * 17)) + ax3_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 357) + (ax1 * 119)) + (ax2 * 17)) + ax3_1)] = max(pool_max[((((ax0 * 357) + (ax1 * 119)) + (ax2 * 17)) + ax3_1)], pad_temp[(((rv0 * 35) + (ax3_1 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

