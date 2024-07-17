void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 54; ++i0_i1_fused) {
    compute[i0_i1_fused] = expf(ph_0[i0_i1_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 54; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(cosf(ph_0[ax0_ax1_fused_ax2_fused]), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 54; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 54; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = expf(sinf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

