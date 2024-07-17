void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    float T_multiply_red[18];
    for (int32_t ax1 = 0; ax1 < 18; ++ax1) {
      T_multiply_red[ax1] = 0.000000e+00f;
      for (int32_t k1 = 0; k1 < 15; ++k1) {
        T_multiply_red[ax1] = (T_multiply_red[ax1] + (data[(((ax0 * 270) + (k1 * 18)) + ax1)] * data[(((ax0 * 270) + (k1 * 18)) + ax1)]));
      }
    }
    for (int32_t ax1_1 = 0; ax1_1 < 15; ++ax1_1) {
      for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
        T_cast[(((ax0 * 270) + (ax1_1 * 18)) + ax2)] = ((data[(((ax0 * 270) + (ax1_1 * 18)) + ax2)] * weight[ax1_1]) * (1.000000e+00f / sqrtf(((T_multiply_red[ax2] * 6.666667e-02f) + 1.000000e-05f))));
      }
    }
  }
}

