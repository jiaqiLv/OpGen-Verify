void default_function_kernel(float* T_subtract, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    float compute[1];
    for (int32_t ax1 = 0; ax1 < 15; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
        compute[0] = expf(ph_0[(((ax0 * 195) + (ax1 * 13)) + ax2)]);
        T_subtract[(((ax0 * 195) + (ax1 * 13)) + ax2)] = (ph_0[(((ax0 * 195) + (ax1 * 13)) + ax2)] - compute[0]);
      }
    }
  }
}

