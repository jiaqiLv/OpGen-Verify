void default_function_kernel(float* T_strided_slice, float* a) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 72; ++ax0_ax1_fused_ax2_fused) {
    T_strided_slice[ax0_ax1_fused_ax2_fused] = a[(((((ax0_ax1_fused_ax2_fused / 24) * 54) + (((ax0_ax1_fused_ax2_fused % 24) / 6) * 9)) + (ax0_ax1_fused_ax2_fused % 6)) + 75)];
  }
}

