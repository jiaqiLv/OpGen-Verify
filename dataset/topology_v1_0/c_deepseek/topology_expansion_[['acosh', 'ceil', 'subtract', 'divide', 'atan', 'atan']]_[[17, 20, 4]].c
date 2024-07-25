void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1360; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 17; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 20; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
        T_divide[(((ax0 * 80) + (ax1 * 4)) + ax2)] = (ph_0[(((ax0 * 80) + (ax1 * 4)) + ax2)] / (ceilf(ph_0[(((ax0 * 80) + (ax1 * 4)) + ax2)]) - ph_0[(((ax0 * 80) + (ax1 * 4)) + ax2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1360; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanf(atanf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

