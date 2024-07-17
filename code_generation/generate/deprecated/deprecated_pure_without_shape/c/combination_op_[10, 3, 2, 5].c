void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
          T_add[((((ax0 * 30) + (ax1 * 10)) + (ax2 * 5)) + ax3)] = (sqrtf(data[((((ax0 * 30) + (ax1 * 10)) + (ax2 * 5)) + ax3)]) + cosf(data_1[((((ax0 * 30) + (ax1 * 10)) + (ax2 * 5)) + ax3)]));
        }
      }
    }
  }
}

