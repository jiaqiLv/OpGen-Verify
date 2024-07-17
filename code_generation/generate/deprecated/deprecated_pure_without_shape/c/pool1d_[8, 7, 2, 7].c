void default_function_kernel(float* data, float* pool_max) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 224; ++ax0_ax1_fused_ax2_fused) {
    float pad_temp[3];
    for (int32_t ax1_ax2_fused_s = 0; ax1_ax2_fused_s < 3; ++ax1_ax2_fused_s) {
      pad_temp[ax1_ax2_fused_s] = (((1 <= (((ax0_ax1_fused_ax2_fused & 3) * 2) + ax1_ax2_fused_s)) && (((ax1_ax2_fused_s >> 1) + (ax0_ax1_fused_ax2_fused & 3)) < 4)) ? data[(((((ax0_ax1_fused_ax2_fused >> 2) * 7) + ((ax0_ax1_fused_ax2_fused & 3) * 2)) + ax1_ax2_fused_s) - 1)] : -3.402823e+38f);
    }
    pool_max[ax0_ax1_fused_ax2_fused] = -3.402823e+38f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      pool_max[ax0_ax1_fused_ax2_fused] = max(pool_max[ax0_ax1_fused_ax2_fused], pad_temp[rv0]);
    }
  }
}
