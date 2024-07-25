void default_function_kernel(float* T_add, float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 392; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 392; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply[ax0_ax1_fused_ax2_fused_1] = ((ph_0[ax0_ax1_fused_ax2_fused_1] + acosf(ph_0[ax0_ax1_fused_ax2_fused_1])) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      compute[((i0_i1_fused * 7) + i2)] = fabsf((ph_0[((i0_i1_fused * 7) + i2)] + acosf(ph_0[((i0_i1_fused * 7) + i2)])));
    }
  }
}
