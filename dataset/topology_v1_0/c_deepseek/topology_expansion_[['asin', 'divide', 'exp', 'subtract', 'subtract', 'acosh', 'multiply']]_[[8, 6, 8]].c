void default_function_kernel(float* T_multiply, float* compute, float* ph_0) {
  float compute_1[384];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 384; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf((ph_0[i0_i1_fused_i2_fused] / asinf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 384; ++i0_i1_fused_i2_fused_1) {
    compute[i0_i1_fused_i2_fused_1] = acoshf((ph_0[i0_i1_fused_i2_fused_1] - (ph_0[i0_i1_fused_i2_fused_1] - compute_1[i0_i1_fused_i2_fused_1])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 48; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      T_multiply[((ax0_ax1_fused * 8) + ax2)] = ((ph_0[((ax0_ax1_fused * 8) + ax2)] - (ph_0[((ax0_ax1_fused * 8) + ax2)] - compute_1[((ax0_ax1_fused * 8) + ax2)])) * ph_0[((ax0_ax1_fused * 8) + ax2)]);
    }
  }
}
