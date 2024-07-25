void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 240; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute[((i0_i1_fused * 12) + i2)] = cosf(ph_0[((i0_i1_fused * 12) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2880; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acoshf(asinhf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2880; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = acoshf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2880; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (asinhf(ph_0[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
