void default_function_kernel(float* T_divide, float* T_subtract, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 143; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      T_subtract[((ax0_ax1_fused * 7) + ax2)] = ((ph_0[((ax0_ax1_fused * 7) + ax2)] / atanhf(ph_0[((ax0_ax1_fused * 7) + ax2)])) - ph_0[((ax0_ax1_fused * 7) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1001; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = expf((ph_0[i0_i1_fused_i2_fused] / atanhf(ph_0[i0_i1_fused_i2_fused])));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1001; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = ((ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
}
