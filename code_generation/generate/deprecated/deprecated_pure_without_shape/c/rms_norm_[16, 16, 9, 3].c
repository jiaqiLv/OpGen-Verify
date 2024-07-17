void default_function_kernel(float* T_cast, float* data, float* weight) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    float T_multiply_red[1];
    for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 3; ++ax3) {
          T_multiply_red[0] = 0.000000e+00f;
          for (int32_t k1 = 0; k1 < 16; ++k1) {
            T_multiply_red[0] = (T_multiply_red[0] + (data[((((ax0 * 432) + (k1 * 27)) + (ax2 * 3)) + ax3)] * data[((((ax0 * 432) + (k1 * 27)) + (ax2 * 3)) + ax3)]));
          }
          T_cast[((((ax0 * 432) + (ax1 * 27)) + (ax2 * 3)) + ax3)] = ((data[((((ax0 * 432) + (ax1 * 27)) + (ax2 * 3)) + ax3)] * weight[ax1]) * (1.000000e+00f / sqrtf(((T_multiply_red[0] * 6.250000e-02f) + 1.000000e-05f))));
        }
      }
    }
  }
}

