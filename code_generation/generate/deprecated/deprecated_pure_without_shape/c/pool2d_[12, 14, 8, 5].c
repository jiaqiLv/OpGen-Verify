void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    float pad_temp[2142];
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 17; ++ax3) {
          pad_temp[(((ax1 * 153) + (ax2 * 17)) + ax3)] = ((((1 <= ax2) && (1 <= ax3)) && (ax3 < 16)) ? data[(((((ax0 * 1680) + (ax1 * 120)) + (ax2 * 15)) + ax3) - 16)] : -3.402823e+38f);
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
        for (int32_t ax3_1 = 0; ax3_1 < 8; ++ax3_1) {
          pool_max[((((ax0 * 448) + (ax1_1 * 32)) + (ax2_1 * 8)) + ax3_1)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 448) + (ax1_1 * 32)) + (ax2_1 * 8)) + ax3_1)] = max(pool_max[((((ax0 * 448) + (ax1_1 * 32)) + (ax2_1 * 8)) + ax3_1)], pad_temp[(((((ax1_1 * 153) + (ax2_1 * 34)) + (rv0 * 17)) + (ax3_1 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

