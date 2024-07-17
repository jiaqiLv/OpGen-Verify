void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 14; ++ax0) {
    float T_multiply_red[272];
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax1_1 = 0; ax1_1 < 17; ++ax1_1) {
        for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
          T_multiply_red[((ax1_1 * 16) + ax2)] = 0.000000e+00f;
          for (int32_t k1 = 0; k1 < 9; ++k1) {
            T_multiply_red[((ax1_1 * 16) + ax2)] = (T_multiply_red[((ax1_1 * 16) + ax2)] + (data[((((ax0 * 2448) + (k1 * 272)) + (ax1_1 * 16)) + ax2)] * data[((((ax0 * 2448) + (k1 * 272)) + (ax1_1 * 16)) + ax2)]));
          }
        }
      }
      for (int32_t ax2_1 = 0; ax2_1 < 17; ++ax2_1) {
        for (int32_t ax3_s = 0; ax3_s < 16; ++ax3_s) {
          T_cast[((((ax0 * 2448) + (ax1 * 272)) + (ax2_1 * 16)) + ax3_s)] = ((data[((((ax0 * 2448) + (ax1 * 272)) + (ax2_1 * 16)) + ax3_s)] * weight[ax1]) * (1.000000e+00f / sqrtf(((T_multiply_red[((ax2_1 * 16) + ax3_s)] * 1.111111e-01f) + 1.000000e-05f))));
        }
      }
    }
  }
}

