void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 14; ++ax0) {
    float pad_temp[15];
    for (int32_t ax1 = 0; ax1 < 17; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        for (int32_t ax1_ax2_fused_ax3_fused_s = 0; ax1_ax2_fused_ax3_fused_s < 15; ++ax1_ax2_fused_ax3_fused_s) {
          pad_temp[ax1_ax2_fused_ax3_fused_s] = (((((1 <= ((ax2 * 2) + (ax1_ax2_fused_ax3_fused_s / 5))) && (((ax1_ax2_fused_ax3_fused_s / 10) + ax2) < 9)) && (1 <= (ax1_ax2_fused_ax3_fused_s % 5))) && ((ax1_ax2_fused_ax3_fused_s % 5) < 4)) ? data[((((((ax0 * 867) + (ax1 * 51)) + (ax2 * 6)) + ((ax1_ax2_fused_ax3_fused_s / 5) * 3)) + (ax1_ax2_fused_ax3_fused_s % 5)) - 4)] : -3.402823e+38f);
        }
        for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
          pool_max[((((ax0 * 306) + (ax1 * 18)) + (ax2 * 2)) + ax3)] = -3.402823e+38f;
          for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
            for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
              pool_max[((((ax0 * 306) + (ax1 * 18)) + (ax2 * 2)) + ax3)] = max(pool_max[((((ax0 * 306) + (ax1 * 18)) + (ax2 * 2)) + ax3)], pad_temp[(((rv0 * 5) + (ax3 * 2)) + rv1)]);
            }
          }
        }
      }
    }
  }
}

