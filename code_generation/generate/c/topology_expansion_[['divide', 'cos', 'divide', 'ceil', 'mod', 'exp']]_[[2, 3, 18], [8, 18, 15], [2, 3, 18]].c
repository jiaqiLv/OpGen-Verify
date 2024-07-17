void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute[((i0_i1_fused * 18) + i2)] = ceilf((ph_0[((i0_i1_fused * 18) + i2)] / cosf(ph_0[((i0_i1_fused * 18) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 108; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf((ph_0[ax0_ax1_fused_ax2_fused] / cosf(ph_0[ax0_ax1_fused_ax2_fused])), ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 6; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute_1[((i0_i1_fused_1 * 18) + i2_1)] = expf((ph_0[((i0_i1_fused_1 * 18) + i2_1)] / ph_3[((i0_i1_fused_1 * 18) + i2_1)]));
    }
  }
}

