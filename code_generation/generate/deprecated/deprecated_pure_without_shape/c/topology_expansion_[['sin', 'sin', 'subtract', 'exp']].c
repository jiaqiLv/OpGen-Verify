void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 140; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 70; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      T_subtract[((ax0_ax1_fused * 2) + ax2)] = (sinf(ph_0[((ax0_ax1_fused * 2) + ax2)]) - ph_0[((ax0_ax1_fused * 2) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 140; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}

