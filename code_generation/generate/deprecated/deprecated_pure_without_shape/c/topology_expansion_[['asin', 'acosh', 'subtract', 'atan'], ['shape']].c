void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1540; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 140; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
      T_subtract[((ax0_ax1_fused * 11) + ax2)] = (acoshf(ph_0[((ax0_ax1_fused * 11) + ax2)]) - ph_0[((ax0_ax1_fused * 11) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 1540; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}
