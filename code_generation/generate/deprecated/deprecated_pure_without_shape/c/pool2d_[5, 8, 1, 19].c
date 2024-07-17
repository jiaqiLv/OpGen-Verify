void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 40; ++ax0_ax1_fused) {
    float pad_temp[177];
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3_s = 0; ax3_s < 59; ++ax3_s) {
        pad_temp[((ax2 * 59) + ax3_s)] = (((((1 <= ax2) && (ax2 < 2)) && (1 <= ax3_s)) && (ax3_s < 58)) ? data[((((ax0_ax1_fused * 57) + (ax2 * 57)) + ax3_s) - 58)] : -3.402823e+38f);
      }
    }
    for (int32_t ax3 = 0; ax3 < 29; ++ax3) {
      pool_max[((ax0_ax1_fused * 29) + ax3)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
          pool_max[((ax0_ax1_fused * 29) + ax3)] = max(pool_max[((ax0_ax1_fused * 29) + ax3)], pad_temp[(((rv0 * 59) + (ax3 * 2)) + rv1)]);
        }
      }
    }
  }
}

