void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 342; ++ax0_ax1_fused) {
    float T_multiply_red[1];
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 13; ++ax3) {
        T_multiply_red[0] = 0.000000e+00f;
        for (int32_t k1 = 0; k1 < 18; ++k1) {
          T_multiply_red[0] = (T_multiply_red[0] + (data[(((((ax0_ax1_fused / 18) * 702) + (k1 * 39)) + (ax2 * 13)) + ax3)] * data[(((((ax0_ax1_fused / 18) * 702) + (k1 * 39)) + (ax2 * 13)) + ax3)]));
        }
        T_cast[(((ax0_ax1_fused * 39) + (ax2 * 13)) + ax3)] = ((data[(((ax0_ax1_fused * 39) + (ax2 * 13)) + ax3)] * weight[(ax0_ax1_fused % 18)]) * (1.000000e+00f / sqrtf(((T_multiply_red[0] * 5.555556e-02f) + 1.000000e-05f))));
      }
    }
  }
}
