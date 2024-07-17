void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 144; ++ax0_ax1_fused_ax2_fused) {
    float pad_temp[15];
    for (int32_t ax2_ax3_fused_s = 0; ax2_ax3_fused_s < 15; ++ax2_ax3_fused_s) {
      pad_temp[ax2_ax3_fused_s] = (((((1 <= (((ax0_ax1_fused_ax2_fused % 6) * 2) + (ax2_ax3_fused_s / 5))) && (((ax2_ax3_fused_s / 10) + (ax0_ax1_fused_ax2_fused % 6)) < 6)) && (1 <= (ax2_ax3_fused_s % 5))) && ((ax2_ax3_fused_s % 5) < 4)) ? data[((((((ax0_ax1_fused_ax2_fused / 6) * 33) + ((ax0_ax1_fused_ax2_fused % 6) * 6)) + ((ax2_ax3_fused_s / 5) * 3)) + (ax2_ax3_fused_s % 5)) - 4)] : -3.402823e+38f);
    }
    for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
      pool_max[((ax0_ax1_fused_ax2_fused * 2) + ax3)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
          pool_max[((ax0_ax1_fused_ax2_fused * 2) + ax3)] = max(pool_max[((ax0_ax1_fused_ax2_fused * 2) + ax3)], pad_temp[(((rv0 * 5) + (ax3 * 2)) + rv1)]);
        }
      }
    }
  }
}

