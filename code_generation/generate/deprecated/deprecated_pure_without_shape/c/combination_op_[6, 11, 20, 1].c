void default_function_kernel(float* T_add, float* data, float* data_1) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
        T_add[(((ax0 * 220) + (ax1 * 20)) + ax2)] = (sqrtf(data[(((ax0 * 220) + (ax1 * 20)) + ax2)]) + cosf(data_1[(((ax0 * 220) + (ax1 * 20)) + ax2)]));
      }
    }
  }
}

