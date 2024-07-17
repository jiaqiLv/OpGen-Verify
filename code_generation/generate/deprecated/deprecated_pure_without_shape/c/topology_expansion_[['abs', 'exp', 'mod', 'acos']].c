void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0) {
  float compute_2[4760];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4760; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4760; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = expf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4760; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(compute_2[ax0_ax1_fused_ax2_fused], ph_0[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 17; ++i0) {
    for (int32_t i1 = 0; i1 < 20; ++i1) {
      for (int32_t i2 = 0; i2 < 14; ++i2) {
        compute_1[(((i0 * 280) + (i1 * 14)) + i2)] = acosf(ph_0[(((i0 * 280) + (i1 * 14)) + i2)]);
      }
    }
  }
}

