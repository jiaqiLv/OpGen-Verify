void default_function_kernel(float* adaptive_pool_max, float* data) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 8; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      adaptive_pool_max[((ax0 * 12) + ax1)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 16; ++rv1) {
          adaptive_pool_max[((ax0 * 12) + ax1)] = max(adaptive_pool_max[((ax0 * 12) + ax1)], data[((((ax0 * 384) + (ax1 * 32)) + (rv0 * 16)) + rv1)]);
        }
      }
    }
  }
}

