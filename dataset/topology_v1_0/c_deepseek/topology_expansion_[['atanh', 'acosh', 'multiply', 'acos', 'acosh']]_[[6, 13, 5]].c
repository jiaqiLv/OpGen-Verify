void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 390; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 6; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 13; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
        T_multiply[(((ax0 * 65) + (ax1 * 5)) + ax2)] = (acoshf(ph_0[(((ax0 * 65) + (ax1 * 5)) + ax2)]) * ph_0[(((ax0 * 65) + (ax1 * 5)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2 = 0; i2 < 5; ++i2) {
        compute_1[(((i0 * 65) + (i1 * 5)) + i2)] = acosf(ph_0[(((i0 * 65) + (i1 * 5)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 390; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = acoshf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}

