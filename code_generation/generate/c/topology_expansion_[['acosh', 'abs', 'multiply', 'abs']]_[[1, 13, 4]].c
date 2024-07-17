void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 13; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      compute[((i0_i1_fused * 4) + i2)] = acoshf(ph_0[((i0_i1_fused * 4) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 52; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (fabsf(ph_0[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 52; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
}

