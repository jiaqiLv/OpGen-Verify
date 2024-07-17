void default_function_kernel(float* T_add, float* T_divide, float* compute, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 18; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
        T_add[(((ax0 * 102) + (ax1 * 17)) + ax2)] = (ph_0[(((ax0 * 102) + (ax1 * 17)) + ax2)] + ph_3[(((ax0 * 102) + (ax1 * 17)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1836; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 18; ++i0) {
    for (int32_t i1 = 0; i1 < 6; ++i1) {
      for (int32_t i2 = 0; i2 < 17; ++i2) {
        compute[(((i0 * 102) + (i1 * 17)) + i2)] = asinf(cosf(ph_0[(((i0 * 102) + (i1 * 17)) + i2)]));
      }
    }
  }
}

