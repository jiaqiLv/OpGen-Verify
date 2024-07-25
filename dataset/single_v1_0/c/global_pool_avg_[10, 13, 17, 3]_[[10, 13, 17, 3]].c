void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    float adaptive_pool_sum[1];
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      adaptive_pool_sum[0] = 0.000000e+00f;
      for (int32_t rv0 = 0; rv0 < 17; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
          adaptive_pool_sum[0] = (adaptive_pool_sum[0] + data[((((ax0 * 663) + (ax1 * 51)) + (rv0 * 3)) + rv1)]);
        }
      }
      adaptive_pool_avg[((ax0 * 13) + ax1)] = (adaptive_pool_sum[0] * 1.960784e-02f);
    }
  }
}

