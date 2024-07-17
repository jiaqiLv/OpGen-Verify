void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3420; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf((ph_0[i0_i1_fused_i2_fused] + atanf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 3420; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = asinf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 15; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 19; ++ax2) {
        T_divide[(((ax0 * 228) + (ax1 * 19)) + ax2)] = (asinhf(ph_0[(((ax0 * 228) + (ax1 * 19)) + ax2)]) / ph_0[(((ax0 * 228) + (ax1 * 19)) + ax2)]);
      }
    }
  }
}

