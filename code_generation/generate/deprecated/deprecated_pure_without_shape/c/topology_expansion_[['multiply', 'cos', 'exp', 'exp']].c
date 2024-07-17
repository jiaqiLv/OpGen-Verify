void default_function_kernel(float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 171; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      T_multiply[((ax0_ax1_fused * 14) + ax2)] = (ph_0[((ax0_ax1_fused * 14) + ax2)] * ph_3[((ax0_ax1_fused * 14) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 171; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      compute[((i0_i1_fused * 14) + i2)] = cosf(ph_0[((i0_i1_fused * 14) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2394; ++i0_i1_fused_i2_fused) {
    float compute_2[1];
    compute_2[0] = expf(ph_0[i0_i1_fused_i2_fused]);
    compute_1[i0_i1_fused_i2_fused] = expf(compute_2[0]);
  }
}

