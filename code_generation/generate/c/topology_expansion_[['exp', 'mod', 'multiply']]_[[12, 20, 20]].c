void default_function_kernel(float* T_multiply, float* ph_0) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4800; ++ax0_ax1_fused_ax2_fused) {
    float compute[1];
    compute[0] = expf(ph_0[ax0_ax1_fused_ax2_fused]);
    T_multiply[ax0_ax1_fused_ax2_fused] = (fmodf(ph_0[ax0_ax1_fused_ax2_fused], compute[0]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

