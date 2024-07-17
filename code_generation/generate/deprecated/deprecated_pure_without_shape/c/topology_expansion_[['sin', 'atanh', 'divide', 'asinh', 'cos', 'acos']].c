void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 396; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 396; ++ax0_ax1_fused_ax2_fused) {
    T_divide[ax0_ax1_fused_ax2_fused] = (atanhf(ph_0[ax0_ax1_fused_ax2_fused]) / ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i1 = 0; i1 < 2; ++i1) {
      for (int32_t i2 = 0; i2 < 18; ++i2) {
        compute_1[(((i0 * 36) + (i1 * 18)) + i2)] = asinhf(ph_0[(((i0 * 36) + (i1 * 18)) + i2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 396; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = acosf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

