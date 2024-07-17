void default_function_kernel(float* data, float* pool_max) {
  float pad_temp[24];
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      pad_temp[((ax1 * 3) + ax2)] = ((1 <= ax2) ? data[(((ax1 * 2) + ax2) - 1)] : -3.402823e+38f);
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    pool_max[ax1_1] = -3.402823e+38f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      pool_max[ax1_1] = max(pool_max[ax1_1], pad_temp[((ax1_1 * 3) + rv0)]);
    }
  }
}

