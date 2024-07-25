void default_function_kernel(float* T_add, float* T_multiply, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 765; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 85; ++ax0_ax1_fused) {
    float compute_1[1];
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      compute_1[0] = expf(ph_0[((ax0_ax1_fused * 9) + ax2)]);
      T_add[((ax0_ax1_fused * 9) + ax2)] = (compute_1[0] + ph_0[((ax0_ax1_fused * 9) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 765; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * fabsf(ph_0[ax0_ax1_fused_ax2_fused]));
  }
}

