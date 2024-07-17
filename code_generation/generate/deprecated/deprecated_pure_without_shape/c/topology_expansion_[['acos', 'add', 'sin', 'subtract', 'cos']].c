void default_function_kernel(float* T_subtract, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 8; ++ax0) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      T_subtract[((ax0 * 4) + ax2)] = (ph_0[((ax0 * 4) + ax2)] - sinf((ph_0[((ax0 * 4) + ax2)] + acosf(ph_0[((ax0 * 4) + ax2)]))));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      compute[((i0_i1_fused * 4) + i2)] = cosf(ph_0[((i0_i1_fused * 4) + i2)]);
    }
  }
}

