void default_function_kernel(float* T_divide, float* data, float* moving_mean, float* moving_var) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 14; ++ax0) {
    float T_reshape[12];
    float T_reshape_1[12];
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      T_reshape[ax1] = moving_mean[ax1];
    }
    for (int32_t ax1_1 = 0; ax1_1 < 12; ++ax1_1) {
      T_reshape_1[ax1_1] = moving_var[ax1_1];
    }
    for (int32_t ax1_2 = 0; ax1_2 < 12; ++ax1_2) {
      for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
        for (int32_t ax3 = 0; ax3 < 18; ++ax3) {
          T_divide[((((ax0 * 3240) + (ax1_2 * 270)) + (ax2 * 18)) + ax3)] = ((data[((((ax0 * 3240) + (ax1_2 * 270)) + (ax2 * 18)) + ax3)] - T_reshape[ax1_2]) / sqrtf((T_reshape_1[ax1_2] + 1.000000e-05f)));
        }
      }
    }
  }
}

