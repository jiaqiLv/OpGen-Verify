void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    float pad_temp[12915];
    for (int32_t ax1 = 0; ax1 < 15; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 21; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 41; ++ax3) {
          pad_temp[(((ax1 * 861) + (ax2 * 41)) + ax3)] = ((((1 <= ax2) && (1 <= ax3)) && (ax3 < 40)) ? data[(((((ax0 * 11700) + (ax1 * 780)) + (ax2 * 39)) + ax3) - 40)] : -3.402823e+38f);
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 15; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 10; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 20; ++ax3_1) {
          pool_max[((((ax0 * 3000) + (ax1_1 * 200)) + (ax2_1 * 20)) + ax3_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 3000) + (ax1_1 * 200)) + (ax2_1 * 20)) + ax3_1)] = max(pool_max[((((ax0 * 3000) + (ax1_1 * 200)) + (ax2_1 * 20)) + ax3_1)], pad_temp[(((((ax1_1 * 861) + (ax2_1 * 82)) + (rv0 * 41)) + (ax3_1 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

