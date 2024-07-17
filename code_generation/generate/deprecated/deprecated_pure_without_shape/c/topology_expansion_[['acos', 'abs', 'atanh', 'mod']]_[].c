void default_function_kernel(float* T_mod, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute[(((i0 * 112) + (i1 * 7)) + i2)] = acosf(ph_0[(((i0 * 112) + (i1 * 7)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 64; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      T_mod[((ax0_ax1_fused * 7) + ax2)] = fmodf(ph_0[((ax0_ax1_fused * 7) + ax2)], atanhf(fabsf(ph_0[((ax0_ax1_fused * 7) + ax2)])));
    }
  }
}

