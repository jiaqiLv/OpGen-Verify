void default_function_kernel(float* T_add, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 20; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
        T_add[(((ax0 * 108) + (ax1 * 18)) + ax2)] = (ph_0[(((ax0 * 108) + (ax1 * 18)) + ax2)] + acosf((ph_0[(((ax0 * 108) + (ax1 * 18)) + ax2)] / asinf(ph_0[(((ax0 * 108) + (ax1 * 18)) + ax2)]))));
      }
    }
  }
}

