void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    float T_multiply_red[10];
    for (int32_t ax1 = 0; ax1 < 20; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
        for (int32_t ax2_1 = 0; ax2_1 < 10; ++ax2_1) {
          T_multiply_red[ax2_1] = 0.000000e+00f;
          for (int32_t k1 = 0; k1 < 20; ++k1) {
            T_multiply_red[ax2_1] = (T_multiply_red[ax2_1] + (data[((((ax0 * 400) + (k1 * 20)) + (ax2 * 10)) + ax2_1)] * data[((((ax0 * 400) + (k1 * 20)) + (ax2 * 10)) + ax2_1)]));
          }
        }
        for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
          T_cast[((((ax0 * 400) + (ax1 * 20)) + (ax2 * 10)) + ax3)] = ((data[((((ax0 * 400) + (ax1 * 20)) + (ax2 * 10)) + ax3)] * weight[ax1]) * (1.000000e+00f / sqrtf(((T_multiply_red[ax3] * 5.000000e-02f) + 1.000000e-05f))));
        }
      }
    }
  }
}

