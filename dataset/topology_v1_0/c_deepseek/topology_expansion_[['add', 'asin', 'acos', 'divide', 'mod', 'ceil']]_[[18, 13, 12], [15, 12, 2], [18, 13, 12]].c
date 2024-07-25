void default_function_kernel(float* T_divide, float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 234; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      compute[((i0_i1_fused * 12) + i2)] = asinf(ph_0[((i0_i1_fused * 12) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2808; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (acosf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2808; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod[ax0_ax1_fused_ax2_fused_1] = fmodf(acosf(ph_0[ax0_ax1_fused_ax2_fused_1]), ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2808; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = ceilf((ph_0[i0_i1_fused_i2_fused] + ph_3[i0_i1_fused_i2_fused]));
  }
}

