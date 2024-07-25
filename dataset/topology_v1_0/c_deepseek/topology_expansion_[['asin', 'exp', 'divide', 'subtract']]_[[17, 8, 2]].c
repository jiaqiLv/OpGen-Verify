void default_function_kernel(float* T_subtract, float* compute, float* ph_0) {
  float compute_1[272];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 272; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      for (int32_t i2 = 0; i2 < 2; ++i2) {
        compute_1[(((i0 * 16) + (i1 * 2)) + i2)] = expf(ph_0[(((i0 * 16) + (i1 * 2)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 272; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] - (compute_1[ax0_ax1_fused_ax2_fused] / ph_0[ax0_ax1_fused_ax2_fused]));
  }
}
