void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 84; ++ax0_ax1_fused) {
    float T_multiply_red[8];
    for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
      for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
        T_multiply_red[ax2_1] = 0.000000e+00f;
        for (int32_t k1 = 0; k1 < 7; ++k1) {
          T_multiply_red[ax2_1] = (T_multiply_red[ax2_1] + (data[(((((ax0_ax1_fused / 7) * 1064) + (k1 * 152)) + (ax2 * 8)) + ax2_1)] * data[(((((ax0_ax1_fused / 7) * 1064) + (k1 * 152)) + (ax2 * 8)) + ax2_1)]));
        }
      }
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        T_cast[(((ax0_ax1_fused * 152) + (ax2 * 8)) + ax3)] = ((data[(((ax0_ax1_fused * 152) + (ax2 * 8)) + ax3)] * weight[(ax0_ax1_fused % 7)]) * (1.000000e+00f / sqrtf(((T_multiply_red[ax3] * 1.428571e-01f) + 1.000000e-05f))));
      }
    }
  }
}

