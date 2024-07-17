void default_function_kernel(float* T_add, float* T_multiply, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 112; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      T_add[((ax0_ax1_fused * 14) + ax2)] = (ph_0[((ax0_ax1_fused * 14) + ax2)] + ph_3[((ax0_ax1_fused * 14) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 7; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
      for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
        T_multiply[(((ax0 * 224) + (ax1 * 14)) + ax2_1)] = (ph_0[(((ax0 * 224) + (ax1 * 14)) + ax2_1)] * ph_3[(((ax0 * 224) + (ax1 * 14)) + ax2_1)]);
      }
    }
  }
}

