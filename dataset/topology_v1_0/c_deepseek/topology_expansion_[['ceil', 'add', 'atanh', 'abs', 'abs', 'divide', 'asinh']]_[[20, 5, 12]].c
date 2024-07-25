void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1200; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanhf((ph_0[i0_i1_fused_i2_fused] + ceilf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 100; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute_1[((i0_i1_fused * 12) + i2)] = fabsf(ph_0[((i0_i1_fused * 12) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1200; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (fabsf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 100; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 12; ++i2_1) {
      compute_2[((i0_i1_fused_1 * 12) + i2_1)] = asinhf(fabsf(ph_0[((i0_i1_fused_1 * 12) + i2_1)]));
    }
  }
}
