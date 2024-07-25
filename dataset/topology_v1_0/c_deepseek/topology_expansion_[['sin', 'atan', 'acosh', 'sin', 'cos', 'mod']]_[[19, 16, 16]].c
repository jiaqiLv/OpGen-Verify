void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4864; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 304; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      compute_1[((i0_i1_fused * 16) + i2)] = acoshf(atanf(ph_0[((i0_i1_fused * 16) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 4864; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = sinf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 304; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      T_mod[((ax0_ax1_fused * 16) + ax2)] = fmodf(cosf(ph_0[((ax0_ax1_fused * 16) + ax2)]), ph_0[((ax0_ax1_fused * 16) + ax2)]);
    }
  }
}

