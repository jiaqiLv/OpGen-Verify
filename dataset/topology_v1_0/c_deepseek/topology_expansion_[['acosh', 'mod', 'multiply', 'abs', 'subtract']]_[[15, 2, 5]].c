void default_function_kernel(float* T_multiply, float* T_subtract, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        T_multiply[(((ax0 * 10) + (ax1 * 5)) + ax2)] = (fmodf(ph_0[(((ax0 * 10) + (ax1 * 5)) + ax2)], acoshf(ph_0[(((ax0 * 10) + (ax1 * 5)) + ax2)])) * ph_0[(((ax0 * 10) + (ax1 * 5)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 15; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
        T_subtract[(((ax0_1 * 10) + (ax1_1 * 5)) + ax2_1)] = (ph_0[(((ax0_1 * 10) + (ax1_1 * 5)) + ax2_1)] - fabsf(ph_0[(((ax0_1 * 10) + (ax1_1 * 5)) + ax2_1)]));
      }
    }
  }
}

