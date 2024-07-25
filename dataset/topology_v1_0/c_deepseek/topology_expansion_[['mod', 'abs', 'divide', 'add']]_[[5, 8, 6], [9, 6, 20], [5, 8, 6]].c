void default_function_kernel(float* T_add, float* T_mod, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
        T_mod[(((ax0 * 48) + (ax1 * 6)) + ax2)] = fmodf(ph_0[(((ax0 * 48) + (ax1 * 6)) + ax2)], ph_3[(((ax0 * 48) + (ax1 * 6)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 5; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
        T_add[(((ax0_1 * 48) + (ax1_1 * 6)) + ax2_1)] = ((ph_0[(((ax0_1 * 48) + (ax1_1 * 6)) + ax2_1)] / fabsf(ph_0[(((ax0_1 * 48) + (ax1_1 * 6)) + ax2_1)])) + ph_0[(((ax0_1 * 48) + (ax1_1 * 6)) + ax2_1)]);
      }
    }
  }
}

