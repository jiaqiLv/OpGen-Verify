void default_function_kernel(float* T_divide, float* data, float* moving_mean, float* moving_var) {
  float T_reshape[1];
  float T_reshape_1[1];
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_reshape[0] = moving_mean[ax1];
      for (int32_t ax3 = 0; ax3 < 11; ++ax3) {
        T_reshape_1[0] = moving_var[ax1];
        T_divide[(((ax1 * 220) + (ax2 * 11)) + ax3)] = ((data[(((ax1 * 220) + (ax2 * 11)) + ax3)] - T_reshape[0]) / sqrtf((T_reshape_1[0] + 1.000000e-05f)));
      }
    }
  }
}

