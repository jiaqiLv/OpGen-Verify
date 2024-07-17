void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 975; ++ax0_ax1_fused_ax2_fused) {
    float pad_temp[9];
    for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
      for (int32_t ax2_ax3_fused_s = 0; ax2_ax3_fused_s < 9; ++ax2_ax3_fused_s) {
        pad_temp[ax2_ax3_fused_s] = (((((1 <= (((ax0_ax1_fused_ax2_fused % 5) * 2) + (ax2_ax3_fused_s / 3))) && (((ax2_ax3_fused_s / 6) + (ax0_ax1_fused_ax2_fused % 5)) < 5)) && (1 <= ((ax3 * 2) + (ax2_ax3_fused_s % 3)))) && ((((ax2_ax3_fused_s % 3) >> 1) + ax3) < 14)) ? data[(((((((ax0_ax1_fused_ax2_fused / 5) * 243) + ((ax0_ax1_fused_ax2_fused % 5) * 54)) + ((ax2_ax3_fused_s / 3) * 27)) + (ax3 * 2)) + (ax2_ax3_fused_s % 3)) - 28)] : -3.402823e+38f);
      }
      pool_max[((ax0_ax1_fused_ax2_fused * 14) + ax3)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
          pool_max[((ax0_ax1_fused_ax2_fused * 14) + ax3)] = max(pool_max[((ax0_ax1_fused_ax2_fused * 14) + ax3)], pad_temp[((rv0 * 3) + rv1)]);
        }
      }
    }
  }
}

