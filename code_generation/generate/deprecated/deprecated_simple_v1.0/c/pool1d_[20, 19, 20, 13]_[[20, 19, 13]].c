void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 20; ++ax0) {
    float pad_temp[285];
    for (int32_t ax1 = 0; ax1 < 19; ++ax1) {
      for (int32_t ax2_s = 0; ax2_s < 15; ++ax2_s) {
        pad_temp[((ax1 * 15) + ax2_s)] = (((1 <= ax2_s) && (ax2_s < 14)) ? data[((((ax0 * 247) + (ax1 * 13)) + ax2_s) - 1)] : -3.402823e+38f);
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 19; ++ax1_1) {
      for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
        pool_max[(((ax0 * 133) + (ax1_1 * 7)) + ax2)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          pool_max[(((ax0 * 133) + (ax1_1 * 7)) + ax2)] = max(pool_max[(((ax0 * 133) + (ax1_1 * 7)) + ax2)], pad_temp[(((ax1_1 * 15) + (ax2 * 2)) + rv0)]);
        }
      }
    }
  }
}
