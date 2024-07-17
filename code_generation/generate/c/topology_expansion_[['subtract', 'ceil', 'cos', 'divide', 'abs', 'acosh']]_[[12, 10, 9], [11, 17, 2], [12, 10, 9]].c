void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1080; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 12; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_divide[(((ax0 * 90) + (ax1 * 9)) + ax2)] = (cosf(ph_0[(((ax0 * 90) + (ax1 * 9)) + ax2)]) / ph_0[(((ax0 * 90) + (ax1 * 9)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 12; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2 = 0; i2 < 9; ++i2) {
        compute_1[(((i0 * 90) + (i1 * 9)) + i2)] = fabsf(cosf(ph_0[(((i0 * 90) + (i1 * 9)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1080; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = acoshf((ph_0[i0_i1_fused_i2_fused_1] - ph_3[i0_i1_fused_i2_fused_1]));
  }
}

