void default_function_kernel(float* T_add, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 221; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      compute[((i0_i1_fused * 4) + i2)] = asinf(ph_0[((i0_i1_fused * 4) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 884; ++ax0_ax1_fused_ax2_fused) {
    T_add[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] + (atanf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 13; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
        compute_1[(((i0 * 52) + (i1 * 4)) + i2_1)] = cosf(sinf(ph_0[(((i0 * 52) + (i1 * 4)) + i2_1)]));
      }
    }
  }
}

