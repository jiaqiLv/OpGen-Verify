void default_function_kernel(float* T_mod, float* T_mod_1, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1530; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1530; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(sinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 153; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      compute_1[((i0_i1_fused * 10) + i2)] = atanhf(sinf(ph_0[((i0_i1_fused * 10) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1530; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod_1[ax0_ax1_fused_ax2_fused_1] = fmodf(fmodf(ph_0[ax0_ax1_fused_ax2_fused_1], ph_3[ax0_ax1_fused_ax2_fused_1]), ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}

