void default_function_kernel(float* T_strided_slice, float* data) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1600; ++ax0_ax1_fused_ax2_fused) {
    float T_reshape[18];
    float T_reshape_1[18];
    float T_transpose[1];
    for (int32_t ax5 = 0; ax5 < 18; ++ax5) {
      T_reshape[ax5] = data[(((((((ax0_ax1_fused_ax2_fused % 80) / 40) * 14400) + ((ax0_ax1_fused_ax2_fused & 1) * 7200)) + ((ax0_ax1_fused_ax2_fused / 80) * 360)) + (((ax0_ax1_fused_ax2_fused % 40) >> 1) * 18)) + ax5)];
    }
    for (int32_t ax3 = 0; ax3 < 18; ++ax3) {
      T_transpose[0] = T_reshape[ax3];
      T_reshape_1[ax3] = T_transpose[0];
    }
    for (int32_t ax3_1 = 0; ax3_1 < 18; ++ax3_1) {
      T_strided_slice[((ax0_ax1_fused_ax2_fused * 18) + ax3_1)] = T_reshape_1[ax3_1];
    }
  }
}
