void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 833; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 9; ++ax3) {
      T_add[((ax0_ax1_fused_ax2_fused * 9) + ax3)] = (data[((ax0_ax1_fused_ax2_fused * 9) + ax3)] + data_1[((ax0_ax1_fused_ax2_fused * 9) + ax3)]);
    }
  }
}

