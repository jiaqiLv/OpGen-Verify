void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    float pad_temp[3];
    for (int32_t ax1 = 0; ax1 < 17; ++ax1) {
      for (int32_t ax2_s = 0; ax2_s < 3; ++ax2_s) {
        pad_temp[ax2_s] = ((1 <= ax2_s) ? data[((((ax0 * 34) + (ax1 * 2)) + ax2_s) - 1)] : -3.402823e+38f);
      }
      pool_max[((ax0 * 17) + ax1)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        pool_max[((ax0 * 17) + ax1)] = max(pool_max[((ax0 * 17) + ax1)], pad_temp[rv0]);
      }
    }
  }
}

