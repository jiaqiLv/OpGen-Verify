void default_function_kernel(float* T_divide, float* data, float* moving_mean, float* moving_var) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        T_divide[(((ax0 * 32) + (ax2 * 8)) + ax3)] = ((data[(((ax0 * 32) + (ax2 * 8)) + ax3)] - moving_mean[0]) / sqrtf((moving_var[0] + 1.000000e-05f)));
      }
    }
  }
}

