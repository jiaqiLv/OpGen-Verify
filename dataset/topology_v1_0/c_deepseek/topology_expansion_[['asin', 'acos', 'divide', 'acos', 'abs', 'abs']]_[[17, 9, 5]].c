void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 765; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 17; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 9; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        T_divide[(((ax0 * 45) + (ax1 * 5)) + ax2)] = (acosf(ph_0[(((ax0 * 45) + (ax1 * 5)) + ax2)]) / ph_0[(((ax0 * 45) + (ax1 * 5)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 153; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      compute_1[((i0_i1_fused * 5) + i2)] = acosf(ph_0[((i0_i1_fused * 5) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 765; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = fabsf(fabsf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

