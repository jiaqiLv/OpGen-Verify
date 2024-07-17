void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    float pad_temp[3];
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
        for (int32_t ax2_s = 0; ax2_s < 3; ++ax2_s) {
          pad_temp[ax2_s] = (((1 <= ((ax2 * 2) + ax2_s)) && (((ax2_s >> 1) + ax2) < 2)) ? data[(((((ax0 * 42) + (ax1 * 3)) + (ax2 * 2)) + ax2_s) - 1)] : -3.402823e+38f);
        }
        pool_max[(((ax0 * 28) + (ax1 * 2)) + ax2)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          pool_max[(((ax0 * 28) + (ax1 * 2)) + ax2)] = max(pool_max[(((ax0 * 28) + (ax1 * 2)) + ax2)], pad_temp[rv0]);
        }
      }
    }
  }
}

