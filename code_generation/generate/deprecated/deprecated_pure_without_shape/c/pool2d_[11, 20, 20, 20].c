void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 220; ++ax0_ax1_fused) {
    float pad_temp[183];
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
        for (int32_t ax3_s = 0; ax3_s < 61; ++ax3_s) {
          pad_temp[((ax2_1 * 61) + ax3_s)] = (((1 <= ((ax2 * 2) + ax2_1)) && (1 <= ax3_s)) ? data[(((((ax0_ax1_fused * 1200) + (ax2 * 120)) + (ax2_1 * 60)) + ax3_s) - 61)] : -3.402823e+38f);
        }
      }
      for (int32_t ax3 = 0; ax3 < 30; ++ax3) {
        pool_max[(((ax0_ax1_fused * 300) + (ax2 * 30)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            pool_max[(((ax0_ax1_fused * 300) + (ax2 * 30)) + ax3)] = max(pool_max[(((ax0_ax1_fused * 300) + (ax2 * 30)) + ax3)], pad_temp[(((rv0 * 61) + (ax3 * 2)) + rv1)]);
          }
        }
      }
    }
  }
}

