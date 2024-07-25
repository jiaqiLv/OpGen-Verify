void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 270; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 30; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      compute[((i0_i1_fused * 9) + i2)] = asinhf(ph_0[((i0_i1_fused * 9) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 30; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 9; ++i2_1) {
      compute_1[((i0_i1_fused_1 * 9) + i2_1)] = asinhf(acoshf(ph_0[((i0_i1_fused_1 * 9) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 270; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = acosf(acoshf(ph_0[i0_i1_fused_i2_fused]));
  }
}

