void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    float T_multiply_red[16];
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
        for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
          T_multiply_red[ax2_1] = 0.000000e+00f;
          for (int32_t k1 = 0; k1 < 6; ++k1) {
            T_multiply_red[ax2_1] = (T_multiply_red[ax2_1] + (data[((((ax0 * 192) + (k1 * 32)) + (ax2 * 16)) + ax2_1)] * data[((((ax0 * 192) + (k1 * 32)) + (ax2 * 16)) + ax2_1)]));
          }
        }
        for (int32_t ax3_s = 0; ax3_s < 16; ++ax3_s) {
          T_cast[((((ax0 * 192) + (ax1 * 32)) + (ax2 * 16)) + ax3_s)] = ((data[((((ax0 * 192) + (ax1 * 32)) + (ax2 * 16)) + ax3_s)] * weight[ax1]) * (1.000000e+00f / sqrtf(((T_multiply_red[ax3_s] * 1.666667e-01f) + 1.000000e-05f))));
        }
      }
    }
  }
}

