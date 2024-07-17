void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 54; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (sinf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 54; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(sinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 54; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (ph_0[ax0_ax1_fused_ax2_fused_1] + ph_3[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute_1[((i0_i1_fused * 18) + i2)] = cosf((ph_0[((i0_i1_fused * 18) + i2)] * ph_3[((i0_i1_fused * 18) + i2)]));
    }
  }
}

