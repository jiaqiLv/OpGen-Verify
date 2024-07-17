void default_function_kernel(float* T_add, float* data, float* data_1) {
  for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 18; ++ax3) {
        T_add[(((ax1 * 306) + (ax2 * 18)) + ax3)] = (sqrtf(data[(((ax1 * 306) + (ax2 * 18)) + ax3)]) + cosf(data_1[(((ax1 * 306) + (ax2 * 18)) + ax3)]));
      }
    }
  }
}

