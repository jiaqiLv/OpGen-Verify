void default_function_kernel(float* T_divide, float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 44; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      compute[((i0_i1_fused * 3) + i2)] = atanf(ph_0[((i0_i1_fused * 3) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 132; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acosf(sinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 11; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
        T_multiply[(((ax0 * 12) + (ax1 * 3)) + ax2)] = (sinf(ph_0[(((ax0 * 12) + (ax1 * 3)) + ax2)]) * ph_0[(((ax0 * 12) + (ax1 * 3)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 132; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

