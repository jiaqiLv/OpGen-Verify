void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float compute_3[36];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 36; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = asinhf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 36; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 2; ++i0) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute_1[((i0 * 18) + i2)] = atanhf(compute_3[((i0 * 18) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 36; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = acoshf(compute_3[i0_i1_fused_i2_fused_2]);
  }
}
