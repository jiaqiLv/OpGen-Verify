void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 156; ++ax0_ax1_fused_ax2_fused) {
    float T_multiply_red[6];
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      T_multiply_red[ax2] = 0.000000e+00f;
      T_multiply_red[ax2] = (T_multiply_red[ax2] + (data[((ax0_ax1_fused_ax2_fused * 6) + ax2)] * data[((ax0_ax1_fused_ax2_fused * 6) + ax2)]));
    }
    for (int32_t ax3_s = 0; ax3_s < 6; ++ax3_s) {
      T_cast[((ax0_ax1_fused_ax2_fused * 6) + ax3_s)] = ((data[((ax0_ax1_fused_ax2_fused * 6) + ax3_s)] * weight[0]) * (1.000000e+00f / sqrtf((T_multiply_red[ax3_s] + 1.000000e-05f))));
    }
  }
}

