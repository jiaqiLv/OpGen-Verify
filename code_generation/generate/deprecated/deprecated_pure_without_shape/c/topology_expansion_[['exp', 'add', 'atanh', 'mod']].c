void default_function_kernel(float* T_mod, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 2; ++ax0) {
    float compute[1];
    for (int32_t ax1 = 0; ax1 < 17; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        compute[0] = expf(ph_0[(((ax0 * 153) + (ax1 * 9)) + ax2)]);
        T_mod[(((ax0 * 153) + (ax1 * 9)) + ax2)] = fmodf(ph_0[(((ax0 * 153) + (ax1 * 9)) + ax2)], atanhf((ph_0[(((ax0 * 153) + (ax1 * 9)) + ax2)] + compute[0])));
      }
    }
  }
}

