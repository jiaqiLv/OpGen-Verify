void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 9; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
        T_divide[(((ax0 * 84) + (ax1 * 12)) + ax2)] = (ph_0[(((ax0 * 84) + (ax1 * 12)) + ax2)] / ph_3[(((ax0 * 84) + (ax1 * 12)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 756; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 7; ++i1) {
      for (int32_t i2 = 0; i2 < 12; ++i2) {
        compute_1[(((i0 * 84) + (i1 * 12)) + i2)] = asinf(asinhf(ph_0[(((i0 * 84) + (i1 * 12)) + i2)]));
      }
    }
  }
}

