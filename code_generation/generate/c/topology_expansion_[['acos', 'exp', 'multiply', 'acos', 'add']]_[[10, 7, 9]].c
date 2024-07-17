void default_function_kernel(float* T_add, float* T_multiply, float* compute, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 630; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = acosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 630; ++ax0_ax1_fused_ax2_fused) {
    float compute_1[1];
    compute_1[0] = expf(ph_0[ax0_ax1_fused_ax2_fused]);
    T_multiply[ax0_ax1_fused_ax2_fused] = (compute_1[0] * ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 10; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
        T_add[(((ax0 * 63) + (ax1 * 9)) + ax2)] = (ph_0[(((ax0 * 63) + (ax1 * 9)) + ax2)] + acosf(ph_0[(((ax0 * 63) + (ax1 * 9)) + ax2)]));
      }
    }
  }
}

