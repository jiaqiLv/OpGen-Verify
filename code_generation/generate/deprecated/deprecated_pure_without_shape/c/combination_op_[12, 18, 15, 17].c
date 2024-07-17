void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 55080; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    T_add[ax0_ax1_fused_ax2_fused_ax3_fused] = (sqrtf(data[ax0_ax1_fused_ax2_fused_ax3_fused]) + cosf(data_1[ax0_ax1_fused_ax2_fused_ax3_fused]));
  }
}

