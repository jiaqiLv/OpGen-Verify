void default_function_kernel(float* T_add, float* T_mod, float* T_multiply, float* T_multiply_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 180; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      T_mod[((ax0_ax1_fused * 20) + ax2)] = fmodf(ph_0[((ax0_ax1_fused * 20) + ax2)], ph_3[((ax0_ax1_fused * 20) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3600; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 3600; ++ax0_ax1_fused_ax2_fused_1) {
    T_multiply[ax0_ax1_fused_ax2_fused_1] = (cosf(ph_0[ax0_ax1_fused_ax2_fused_1]) * ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 3600; ++ax0_ax1_fused_ax2_fused_2) {
    T_multiply_1[ax0_ax1_fused_ax2_fused_2] = (cosf(ph_0[ax0_ax1_fused_ax2_fused_2]) * ph_0[ax0_ax1_fused_ax2_fused_2]);
  }
}

