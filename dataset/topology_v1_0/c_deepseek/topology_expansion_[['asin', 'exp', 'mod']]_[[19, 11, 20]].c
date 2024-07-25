void default_function_kernel(float* T_mod, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 19; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 20; ++i2) {
        compute[(((i0 * 220) + (i1 * 20)) + i2)] = asinf(ph_0[(((i0 * 220) + (i1 * 20)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    float compute_1[220];
    for (int32_t i1_1 = 0; i1_1 < 11; ++i1_1) {
      for (int32_t i2_1 = 0; i2_1 < 20; ++i2_1) {
        compute_1[((i1_1 * 20) + i2_1)] = expf(ph_0[(((ax0 * 220) + (i1_1 * 20)) + i2_1)]);
      }
    }
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
        T_mod[(((ax0 * 220) + (ax1 * 20)) + ax2)] = fmodf(compute_1[((ax1 * 20) + ax2)], ph_0[(((ax0 * 220) + (ax1 * 20)) + ax2)]);
      }
    }
  }
}
