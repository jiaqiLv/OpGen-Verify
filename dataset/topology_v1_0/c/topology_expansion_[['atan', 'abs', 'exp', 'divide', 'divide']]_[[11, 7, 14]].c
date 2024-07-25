void default_function_kernel(float* T_divide, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1078; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1078; ++ax0_ax1_fused_ax2_fused) {
    float compute_1[1];
    compute_1[0] = expf(fabsf(ph_0[ax0_ax1_fused_ax2_fused]));
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / (ph_0[ax0_ax1_fused_ax2_fused] / compute_1[0]));
  }
}
