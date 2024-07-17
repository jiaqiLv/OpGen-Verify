void default_function_kernel(float* T_add, float* T_mod, float* T_multiply, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1440; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ceilf(ph_0[ax0_ax1_fused_ax2_fused]) * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 90; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      T_add[((ax0_ax1_fused * 16) + ax2)] = (ceilf(ph_0[((ax0_ax1_fused * 16) + ax2)]) + ph_0[((ax0_ax1_fused * 16) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1440; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod[ax0_ax1_fused_ax2_fused_1] = fmodf(ph_0[ax0_ax1_fused_ax2_fused_1], ph_3[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1440; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf((ph_0[i0_i1_fused_i2_fused] * ph_3[i0_i1_fused_i2_fused]));
  }
}

