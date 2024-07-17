void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 75; ++ax0_ax1_fused_ax2_fused) {
    float T_multiply_red[20];
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_multiply_red[ax2] = 0.000000e+00f;
      for (int32_t k1 = 0; k1 < 3; ++k1) {
        T_multiply_red[ax2] = (T_multiply_red[ax2] + (data[(((((ax0_ax1_fused_ax2_fused / 15) * 300) + (k1 * 100)) + ((ax0_ax1_fused_ax2_fused % 5) * 20)) + ax2)] * data[(((((ax0_ax1_fused_ax2_fused / 15) * 300) + (k1 * 100)) + ((ax0_ax1_fused_ax2_fused % 5) * 20)) + ax2)]));
      }
    }
    for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
      T_cast[((ax0_ax1_fused_ax2_fused * 20) + ax3)] = ((data[((ax0_ax1_fused_ax2_fused * 20) + ax3)] * weight[((ax0_ax1_fused_ax2_fused % 15) / 5)]) * (1.000000e+00f / sqrtf(((T_multiply_red[ax3] * 3.333333e-01f) + 1.000000e-05f))));
    }
  }
}

