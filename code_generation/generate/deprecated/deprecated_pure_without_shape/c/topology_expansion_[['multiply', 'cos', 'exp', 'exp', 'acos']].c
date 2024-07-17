void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  float compute_3[5054];
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 5054; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 5054; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 266; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute_3[((i0_i1_fused * 19) + i2)] = expf(ph_0[((i0_i1_fused * 19) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 5054; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = expf(compute_3[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_1 = 0; i0_i1_fused_1 < 266; ++i0_i1_fused_1) {
    for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
      compute_2[((i0_i1_fused_1 * 19) + i2_1)] = acosf(compute_3[((i0_i1_fused_1 * 19) + i2_1)]);
    }
  }
}

