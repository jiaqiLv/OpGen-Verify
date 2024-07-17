void default_function_kernel(float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 40; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      T_subtract[((ax0_ax1_fused * 7) + ax2)] = (ph_0[((ax0_ax1_fused * 7) + ax2)] - ph_3[((ax0_ax1_fused * 7) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 20; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute[(((i0 * 14) + (i1 * 7)) + i2)] = expf(ph_0[(((i0 * 14) + (i1 * 7)) + i2)]);
      }
    }
  }
}

