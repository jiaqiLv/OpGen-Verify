void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1190; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 17; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
        T_subtract[(((ax0 * 70) + (ax1 * 7)) + ax2)] = (ph_0[(((ax0 * 70) + (ax1 * 7)) + ax2)] - atanf(acosf(ph_0[(((ax0 * 70) + (ax1 * 7)) + ax2)])));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute_1[(((i0 * 70) + (i1 * 7)) + i2)] = atanf(ph_0[(((i0 * 70) + (i1 * 7)) + i2)]);
      }
    }
  }
}
