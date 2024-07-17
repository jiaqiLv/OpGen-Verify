void default_function_kernel(float* T_mod, float* T_multiply, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2 = 0; i2 < 6; ++i2) {
        compute[(((i0 * 108) + (i1 * 6)) + i2)] = ceilf(ph_0[(((i0 * 108) + (i1 * 6)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 18; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
        T_multiply[(((ax0 * 108) + (ax1 * 6)) + ax2)] = (sinf(ph_0[(((ax0 * 108) + (ax1 * 6)) + ax2)]) * ph_0[(((ax0 * 108) + (ax1 * 6)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_1 = 0; ax0_1 < 15; ++ax0_1) {
    for (int32_t ax1_1 = 0; ax1_1 < 18; ++ax1_1) {
      for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
        T_mod[(((ax0_1 * 108) + (ax1_1 * 6)) + ax2_1)] = fmodf(ph_0[(((ax0_1 * 108) + (ax1_1 * 6)) + ax2_1)], asinf(ph_0[(((ax0_1 * 108) + (ax1_1 * 6)) + ax2_1)]));
      }
    }
  }
}

