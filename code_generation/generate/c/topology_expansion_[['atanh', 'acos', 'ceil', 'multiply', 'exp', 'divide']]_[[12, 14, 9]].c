void default_function_kernel(float* T_divide, float* T_multiply, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 168; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      compute[((i0_i1_fused * 9) + i2)] = atanhf(ph_0[((i0_i1_fused * 9) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1512; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ceilf(acosf(ph_0[ax0_ax1_fused_ax2_fused])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1512; ++ax0_ax1_fused_ax2_fused_1) {
    float compute_1[1];
    compute_1[0] = expf(ph_0[ax0_ax1_fused_ax2_fused_1]);
    T_divide[ax0_ax1_fused_ax2_fused_1] = (compute_1[0] / ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}
