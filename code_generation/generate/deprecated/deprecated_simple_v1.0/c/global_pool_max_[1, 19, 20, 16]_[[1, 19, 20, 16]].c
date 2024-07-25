void default_function_kernel(float* adaptive_pool_max, float* data) {
  for (int32_t ax1 = 0; ax1 < 19; ++ax1) {
    adaptive_pool_max[ax1] = -3.402823e+38f;
    for (int32_t rv0 = 0; rv0 < 20; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 16; ++rv1) {
        adaptive_pool_max[ax1] = max(adaptive_pool_max[ax1], data[(((ax1 * 320) + (rv0 * 16)) + rv1)]);
      }
    }
  }
}
