void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 13; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_divide[(((ax0 * 99) + (ax1 * 9)) + ax2)] = (ph_0[(((ax0 * 99) + (ax1 * 9)) + ax2)] / ph_3[(((ax0 * 99) + (ax1 * 9)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 143; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      compute[((i0_i1_fused * 9) + i2)] = acosf(ph_0[((i0_i1_fused * 9) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1287; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = fabsf(ceilf(ph_0[i0_i1_fused_i2_fused]));
  }
}

