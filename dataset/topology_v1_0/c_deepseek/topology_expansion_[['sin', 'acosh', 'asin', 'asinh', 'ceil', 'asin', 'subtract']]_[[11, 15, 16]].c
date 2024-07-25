void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2640; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 165; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      compute_1[((i0_i1_fused * 16) + i2)] = asinf(acoshf(ph_0[((i0_i1_fused * 16) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2640; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinhf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 2640; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = asinf(ceilf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2640; ++ax0_ax1_fused_ax2_fused) {
    T_subtract[ax0_ax1_fused_ax2_fused] = (ceilf(ph_0[ax0_ax1_fused_ax2_fused]) - ph_0[ax0_ax1_fused_ax2_fused]);
  }
}

