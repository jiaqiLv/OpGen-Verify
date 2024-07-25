void default_function_kernel(float* T_add, float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 324; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      compute[((i0_i1_fused * 2) + i2)] = atanhf(ph_0[((i0_i1_fused * 2) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 648; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - (atanf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 18; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
        compute_1[(((i0 * 36) + (i1 * 2)) + i2_1)] = atanhf(asinf(ph_0[(((i0 * 36) + (i1 * 2)) + i2_1)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 648; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (asinf(ph_0[ax0_ax1_fused_ax2_fused_1]) + ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}

