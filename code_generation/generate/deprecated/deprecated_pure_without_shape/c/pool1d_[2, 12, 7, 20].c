void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 24; ++ax0_ax1_fused) {
    float pad_temp[21];
    for (int32_t ax2 = 0; ax2 < 21; ++ax2) {
      pad_temp[ax2] = ((1 <= ax2) ? data[(((ax0_ax1_fused * 20) + ax2) - 1)] : -3.402823e+38f);
    }
    for (int32_t ax2_1 = 0; ax2_1 < 10; ++ax2_1) {
      pool_max[((ax0_ax1_fused * 10) + ax2_1)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
        pool_max[((ax0_ax1_fused * 10) + ax2_1)] = max(pool_max[((ax0_ax1_fused * 10) + ax2_1)], pad_temp[((ax2_1 * 2) + rv0)]);
      }
    }
  }
}

