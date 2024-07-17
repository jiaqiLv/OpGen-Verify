void default_function_kernel(float* T_divide, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 140; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      T_divide[((ax0_ax1_fused * 5) + ax2)] = (ph_0[((ax0_ax1_fused * 5) + ax2)] / ph_3[((ax0_ax1_fused * 5) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 700; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 140; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      compute_1[((i0_i1_fused * 5) + i2)] = atanhf(ceilf(ph_0[((i0_i1_fused * 5) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 700; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = atanhf(ceilf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}

