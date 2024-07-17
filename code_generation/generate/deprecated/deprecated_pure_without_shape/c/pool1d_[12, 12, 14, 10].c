void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 144; ++ax0_ax1_fused) {
    float pad_temp[11];
    for (int32_t ax1_ax2_fused_s = 0; ax1_ax2_fused_s < 11; ++ax1_ax2_fused_s) {
      pad_temp[ax1_ax2_fused_s] = ((1 <= ax1_ax2_fused_s) ? data[(((ax0_ax1_fused * 10) + ax1_ax2_fused_s) - 1)] : -3.402823e+38f);
    }
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      pool_max[((ax0_ax1_fused * 5) + ax2)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        pool_max[((ax0_ax1_fused * 5) + ax2)] = max(pool_max[((ax0_ax1_fused * 5) + ax2)], pad_temp[((ax2 * 2) + rv0)]);
      }
    }
  }
}

