void default_function_kernel(float* T_divide, float* data, float* moving_mean, float* moving_var) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 7220; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    T_divide[ax0_ax1_fused_ax2_fused_ax3_fused] = ((data[ax0_ax1_fused_ax2_fused_ax3_fused] - moving_mean[0]) / sqrtf((moving_var[0] + 1.000000e-05f)));
  }
}

