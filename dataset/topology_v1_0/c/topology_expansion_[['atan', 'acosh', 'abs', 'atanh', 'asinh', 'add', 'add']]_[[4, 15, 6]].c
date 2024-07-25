void default_function_kernel(float* T_add, float* T_add_1, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 360; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 60; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      compute_1[((i0_i1_fused * 6) + i2)] = fabsf(acoshf(ph_0[((i0_i1_fused * 6) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 4; ++i0) {
    for (int32_t i1 = 0; i1 < 15; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
        compute_2[(((i0 * 90) + (i1 * 6)) + i2_1)] = atanhf(ph_0[(((i0 * 90) + (i1 * 6)) + i2_1)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 360; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused]) + ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 360; ++ax0_ax1_fused_ax2_fused_1) {
    T_add_1[ax0_ax1_fused_ax2_fused_1] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}
