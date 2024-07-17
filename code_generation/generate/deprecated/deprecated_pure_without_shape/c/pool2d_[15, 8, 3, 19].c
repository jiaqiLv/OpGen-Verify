void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    float pad_temp[2360];
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 59; ++ax3) {
          pad_temp[(((ax1 * 295) + (ax2 * 59)) + ax3)] = (((((1 <= ax2) && (ax2 < 4)) && (1 <= ax3)) && (ax3 < 58)) ? data[(((((ax0 * 1368) + (ax1 * 171)) + (ax2 * 57)) + ax3) - 58)] : -3.402823e+38f);
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 29; ++ax3_1) {
          pool_max[((((ax0 * 464) + (ax1_1 * 58)) + (ax2_1 * 29)) + ax3_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 464) + (ax1_1 * 58)) + (ax2_1 * 29)) + ax3_1)] = max(pool_max[((((ax0 * 464) + (ax1_1 * 58)) + (ax2_1 * 29)) + ax3_1)], pad_temp[(((((ax1_1 * 295) + (ax2_1 * 118)) + (rv0 * 59)) + (ax3_1 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

