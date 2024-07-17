void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 19; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
      T_subtract[((ax0 * 7) + ax1)] = (ph_0[((ax0 * 7) + ax1)] - ph_3[((ax0 * 7) + ax1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 133; ++i0_i1_fused) {
    compute[i0_i1_fused] = acosf(ph_0[i0_i1_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 133; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
}
