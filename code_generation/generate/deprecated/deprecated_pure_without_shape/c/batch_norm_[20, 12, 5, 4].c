void default_function_kernel(float* T_divide, float* data, float* moving_mean, float* moving_var) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 240; ++ax0_ax1_fused) {
    float T_reshape[1];
    float T_reshape_1[1];
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      T_reshape[0] = moving_mean[(ax0_ax1_fused % 12)];
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        T_reshape_1[0] = moving_var[(ax0_ax1_fused % 12)];
        T_divide[(((ax0_ax1_fused * 20) + (ax2 * 4)) + ax3)] = ((data[(((ax0_ax1_fused * 20) + (ax2 * 4)) + ax3)] - T_reshape[0]) / sqrtf((T_reshape_1[0] + 1.000000e-05f)));
      }
    }
  }
}
