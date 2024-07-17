void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 150; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf((ph_0[i0_i1_fused_i2_fused] - asinf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 150; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] / cosf(ph_0[ax0_ax1_fused_ax2_fused])) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 150; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acosf((ph_0[i0_i1_fused_i2_fused_1] / cosf(ph_0[i0_i1_fused_i2_fused_1])));
  }
}

