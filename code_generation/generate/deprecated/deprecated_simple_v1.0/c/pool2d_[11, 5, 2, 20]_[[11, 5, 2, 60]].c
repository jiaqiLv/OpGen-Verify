void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    float pad_temp[9];
    for (int32_t ax1 = 0; ax1 < 5; ++ax1) {
      for (int32_t ax3 = 0; ax3 < 30; ++ax3) {
        for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
          for (int32_t ax3_s = 0; ax3_s < 3; ++ax3_s) {
            pad_temp[((ax2 * 3) + ax3_s)] = (((1 <= ax2) && (1 <= ((ax3 * 2) + ax3_s))) ? data[((((((ax0 * 600) + (ax1 * 120)) + (ax2 * 60)) + (ax3 * 2)) + ax3_s) - 61)] : -3.402823e+38f);
          }
        }
        pool_max[(((ax0 * 150) + (ax1 * 30)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            pool_max[(((ax0 * 150) + (ax1 * 30)) + ax3)] = max(pool_max[(((ax0 * 150) + (ax1 * 30)) + ax3)], pad_temp[((rv0 * 3) + rv1)]);
          }
        }
      }
    }
  }
}

