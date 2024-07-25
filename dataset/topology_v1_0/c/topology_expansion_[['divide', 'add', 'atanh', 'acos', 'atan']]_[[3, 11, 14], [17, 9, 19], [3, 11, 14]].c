void default_function_kernel(float* T_add, float* T_divide, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 462; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] / ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 3; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
        T_add[(((ax0 * 154) + (ax1 * 14)) + ax2)] = (ph_0[(((ax0 * 154) + (ax1 * 14)) + ax2)] + ph_3[(((ax0 * 154) + (ax1 * 14)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 462; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(atanhf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 3; ++i0) {
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute_1[(((i0 * 154) + (i1 * 14)) + i2)] = atanf(atanhf(ph_0[(((i0 * 154) + (i1 * 14)) + i2)]));
      }
    }
  }
}
