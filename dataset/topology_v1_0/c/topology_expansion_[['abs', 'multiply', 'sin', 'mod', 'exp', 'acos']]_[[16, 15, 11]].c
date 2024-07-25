void default_function_kernel(float* T_mod, float* compute, float* ph_0) {
  float compute_1[2640];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2640; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], sinf((ph_0[ax0_ax1_fused_ax2_fused] * fabsf(ph_0[ax0_ax1_fused_ax2_fused]))));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2640; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2640; ++i0_i1_fused_i2_fused_1) {
    compute[i0_i1_fused_i2_fused_1] = acosf(compute_1[i0_i1_fused_i2_fused_1]);
  }
}
