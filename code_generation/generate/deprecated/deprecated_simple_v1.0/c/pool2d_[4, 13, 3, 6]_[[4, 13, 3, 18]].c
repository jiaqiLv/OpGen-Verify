void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 52; ++ax0_ax1_fused) {
    float pad_temp[95];
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 19; ++ax3) {
        pad_temp[((ax2 * 19) + ax3)] = ((((1 <= ax2) && (ax2 < 4)) && (1 <= ax3)) ? data[((((ax0_ax1_fused * 54) + (ax2 * 18)) + ax3) - 19)] : -3.402823e+38f);
      }
    }
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 9; ++ax3_1) {
        pool_max[(((ax0_ax1_fused * 18) + (ax2_1 * 9)) + ax3_1)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            pool_max[(((ax0_ax1_fused * 18) + (ax2_1 * 9)) + ax3_1)] = max(pool_max[(((ax0_ax1_fused * 18) + (ax2_1 * 9)) + ax3_1)], pad_temp[((((ax2_1 * 38) + (rv0 * 19)) + (ax3_1 * 2)) + rv1)]);
          }
        }
      }
    }
  }
}
