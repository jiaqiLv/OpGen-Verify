void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 315; ++ax0_ax1_fused_ax2_fused) {
    T_mod[ax0_ax1_fused_ax2_fused] = fmodf(ph_0[ax0_ax1_fused_ax2_fused], ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 315; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 9; ++i0) {
    for (int32_t i1 = 0; i1 < 5; ++i1) {
      for (int32_t i2 = 0; i2 < 7; ++i2) {
        compute_1[(((i0 * 35) + (i1 * 7)) + i2)] = sinf(ph_0[(((i0 * 35) + (i1 * 7)) + i2)]);
      }
    }
  }
}
