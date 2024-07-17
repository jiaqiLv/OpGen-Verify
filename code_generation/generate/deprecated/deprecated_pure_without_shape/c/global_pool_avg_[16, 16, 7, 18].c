void default_function_kernel(float* adaptive_pool_avg, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 256; ++ax0_ax1_fused) {
    float adaptive_pool_sum[1];
    adaptive_pool_sum[0] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 7; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 18; ++rv1) {
        adaptive_pool_sum[0] = (adaptive_pool_sum[0] + data[(((ax0_ax1_fused * 126) + (rv0 * 18)) + rv1)]);
      }
    }
    adaptive_pool_avg[ax0_ax1_fused] = (adaptive_pool_sum[0] * 7.936508e-03f);
  }
}

