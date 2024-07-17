void default_function_kernel(float* T_add, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 19; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_add[(((ax0 * 171) + (ax1 * 9)) + ax2)] = (cosf(ph_0[(((ax0 * 171) + (ax1 * 9)) + ax2)]) + ph_0[(((ax0 * 171) + (ax1 * 9)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 15; ++i0) {
    for (int32_t i1 = 0; i1 < 19; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        compute[(((i0 * 171) + (i1 * 9)) + i2)] = sinf(ph_0[(((i0 * 171) + (i1 * 9)) + i2)]);
      }
    }
  }
}

