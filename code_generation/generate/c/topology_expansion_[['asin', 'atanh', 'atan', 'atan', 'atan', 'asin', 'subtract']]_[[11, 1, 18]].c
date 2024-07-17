void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 11; ++i0) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute[((i0 * 18) + i2)] = asinf(ph_0[((i0 * 18) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_1 = 0; i0_1 < 11; ++i0_1) {
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute_1[((i0_1 * 18) + i2_1)] = atanf(atanhf(ph_0[((i0_1 * 18) + i2_1)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 198; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 198; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = asinf(atanf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 198; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (atanf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

