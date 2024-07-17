void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    float pad_temp[19];
    for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        pad_temp[ax2] = (((1 <= ax2) && (ax2 < 18)) ? data[((((ax0 * 272) + (ax1 * 17)) + ax2) - 1)] : -3.402823e+38f);
      }
      for (int32_t ax2_1 = 0; ax2_1 < 9; ++ax2_1) {
        pool_max[(((ax0 * 144) + (ax1 * 9)) + ax2_1)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          pool_max[(((ax0 * 144) + (ax1 * 9)) + ax2_1)] = max(pool_max[(((ax0 * 144) + (ax1 * 9)) + ax2_1)], pad_temp[((ax2_1 * 2) + rv0)]);
        }
      }
    }
  }
}

