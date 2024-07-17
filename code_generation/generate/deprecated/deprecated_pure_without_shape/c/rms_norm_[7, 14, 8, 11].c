void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    float T_multiply_red[1];
    for (int32_t ax3 = 0; ax3 < 11; ++ax3) {
      T_multiply_red[0] = 0.000000e+00f;
      for (int32_t k1 = 0; k1 < 14; ++k1) {
        T_multiply_red[0] = (T_multiply_red[0] + (data[(((((ax0_ax1_fused_ax2_fused / 112) * 1232) + (k1 * 88)) + ((ax0_ax1_fused_ax2_fused & 7) * 11)) + ax3)] * data[(((((ax0_ax1_fused_ax2_fused / 112) * 1232) + (k1 * 88)) + ((ax0_ax1_fused_ax2_fused & 7) * 11)) + ax3)]));
      }
      T_cast[((ax0_ax1_fused_ax2_fused * 11) + ax3)] = ((data[((ax0_ax1_fused_ax2_fused * 11) + ax3)] * weight[((ax0_ax1_fused_ax2_fused % 112) >> 3)]) * (1.000000e+00f / sqrtf(((T_multiply_red[0] * 7.142857e-02f) + 1.000000e-05f))));
    }
  }
}

