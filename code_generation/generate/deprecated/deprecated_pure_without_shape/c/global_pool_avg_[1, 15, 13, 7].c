void default_function_kernel(float* adaptive_pool_avg, float* data) {
  float adaptive_pool_sum[1];
  for (int32_t ax1 = 0; ax1 < 15; ++ax1) {
    adaptive_pool_sum[0] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 13; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 7; ++rv1) {
        adaptive_pool_sum[0] = (adaptive_pool_sum[0] + data[(((ax1 * 91) + (rv0 * 7)) + rv1)]);
      }
    }
    adaptive_pool_avg[ax1] = (adaptive_pool_sum[0] * 1.098901e-02f);
  }
}

