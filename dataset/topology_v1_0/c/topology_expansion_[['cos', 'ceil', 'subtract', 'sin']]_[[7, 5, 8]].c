void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 7; ++i0) {
    for (int32_t i1 = 0; i1 < 5; ++i1) {
      for (int32_t i2 = 0; i2 < 8; ++i2) {
        compute[(((i0 * 40) + (i1 * 8)) + i2)] = cosf(ph_0[(((i0 * 40) + (i1 * 8)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 280; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ceilf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 280; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
}
