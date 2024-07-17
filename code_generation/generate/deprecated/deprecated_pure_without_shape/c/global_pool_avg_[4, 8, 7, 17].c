void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    float adaptive_pool_sum[8];
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      adaptive_pool_sum[ax1] = 0.000000e+00f;
      for (int32_t rv0 = 0; rv0 < 7; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 17; ++rv1) {
          adaptive_pool_sum[ax1] = (adaptive_pool_sum[ax1] + data[((((ax0 * 952) + (ax1 * 119)) + (rv0 * 17)) + rv1)]);
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
      adaptive_pool_avg[((ax0 * 8) + ax1_1)] = (adaptive_pool_sum[ax1_1] * 8.403361e-03f);
    }
  }
}

