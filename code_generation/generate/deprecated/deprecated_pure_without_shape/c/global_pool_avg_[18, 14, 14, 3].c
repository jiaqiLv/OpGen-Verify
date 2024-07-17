void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    float adaptive_pool_sum[14];
    for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
      adaptive_pool_sum[ax1] = 0.000000e+00f;
      for (int32_t rv0 = 0; rv0 < 14; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
          adaptive_pool_sum[ax1] = (adaptive_pool_sum[ax1] + data[((((ax0 * 588) + (ax1 * 42)) + (rv0 * 3)) + rv1)]);
        }
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
      adaptive_pool_avg[((ax0 * 14) + ax1_1)] = (adaptive_pool_sum[ax1_1] * 2.380952e-02f);
    }
  }
}

