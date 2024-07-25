void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      compute[((i0_i1_fused * 10) + i2)] = acoshf(ph_0[((i0_i1_fused * 10) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 180; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = ceilf(acosf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
        T_divide[(((ax0 * 60) + (ax1 * 10)) + ax2)] = ((ph_0[(((ax0 * 60) + (ax1 * 10)) + ax2)] - acosf(ph_0[(((ax0 * 60) + (ax1 * 10)) + ax2)])) / ph_0[(((ax0 * 60) + (ax1 * 10)) + ax2)]);
      }
    }
  }
}

