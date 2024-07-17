void default_function_kernel(float* T_multiply, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 221; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      T_subtract[((ax0_ax1_fused * 18) + ax2)] = (ph_0[((ax0_ax1_fused * 18) + ax2)] - ph_3[((ax0_ax1_fused * 18) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3978; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 221; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 18; ++ax2_1) {
      T_multiply[((ax0_ax1_fused_1 * 18) + ax2_1)] = (asinhf(ph_0[((ax0_ax1_fused_1 * 18) + ax2_1)]) * ph_0[((ax0_ax1_fused_1 * 18) + ax2_1)]);
    }
  }
}
