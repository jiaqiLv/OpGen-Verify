void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    float T_multiply_red[1];
    for (int32_t ax1 = 0; ax1 < 5; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
        T_multiply_red[0] = 0.000000e+00f;
        for (int32_t k1 = 0; k1 < 5; ++k1) {
          T_multiply_red[0] = (T_multiply_red[0] + (data[(((ax0 * 90) + (k1 * 18)) + ax2)] * data[(((ax0 * 90) + (k1 * 18)) + ax2)]));
        }
        T_cast[(((ax0 * 90) + (ax1 * 18)) + ax2)] = ((data[(((ax0 * 90) + (ax1 * 18)) + ax2)] * weight[ax1]) * (1.000000e+00f / sqrtf(((T_multiply_red[0] * 2.000000e-01f) + 1.000000e-05f))));
      }
    }
  }
}

