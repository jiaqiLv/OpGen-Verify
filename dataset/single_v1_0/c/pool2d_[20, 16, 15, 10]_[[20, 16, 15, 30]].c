void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 320; ++ax0_ax1_fused) {
    float pad_temp[9];
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 15; ++ax3) {
        for (int32_t ax1_ax2_fused_ax3_fused_s = 0; ax1_ax2_fused_ax3_fused_s < 9; ++ax1_ax2_fused_ax3_fused_s) {
          pad_temp[ax1_ax2_fused_ax3_fused_s] = ((((1 <= ((ax2 * 2) + (ax1_ax2_fused_ax3_fused_s / 3))) && (((ax1_ax2_fused_ax3_fused_s / 6) + ax2) < 8)) && (1 <= ((ax3 * 2) + (ax1_ax2_fused_ax3_fused_s % 3)))) ? data[((((((ax0_ax1_fused * 450) + (ax2 * 60)) + ((ax1_ax2_fused_ax3_fused_s / 3) * 30)) + (ax3 * 2)) + (ax1_ax2_fused_ax3_fused_s % 3)) - 31)] : -3.402823e+38f);
        }
        pool_max[(((ax0_ax1_fused * 120) + (ax2 * 15)) + ax3)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            pool_max[(((ax0_ax1_fused * 120) + (ax2 * 15)) + ax3)] = max(pool_max[(((ax0_ax1_fused * 120) + (ax2 * 15)) + ax3)], pad_temp[((rv0 * 3) + rv1)]);
          }
        }
      }
    }
  }
}
