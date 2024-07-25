void default_function_kernel(float* T_mod, float* T_mod_1, float* T_multiply, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2912; ++ax0_ax1_fused_ax2_fused) {
    T_multiply[ax0_ax1_fused_ax2_fused] = (ph_0[ax0_ax1_fused_ax2_fused] * ph_3[ax0_ax1_fused_ax2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 16; ++i0) {
    for (int32_t i1 = 0; i1 < 14; ++i1) {
      for (int32_t i2 = 0; i2 < 13; ++i2) {
        compute[(((i0 * 182) + (i1 * 13)) + i2)] = expf(fabsf(ph_0[(((i0 * 182) + (i1 * 13)) + i2)]));
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2912; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinf(fabsf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 224; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 13; ++ax2) {
      T_mod[((ax0_ax1_fused * 13) + ax2)] = fmodf((ph_0[((ax0_ax1_fused * 13) + ax2)] - ph_3[((ax0_ax1_fused * 13) + ax2)]), ph_0[((ax0_ax1_fused * 13) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 2912; ++ax0_ax1_fused_ax2_fused_1) {
    T_mod_1[ax0_ax1_fused_ax2_fused_1] = fmodf((ph_0[ax0_ax1_fused_ax2_fused_1] - ph_3[ax0_ax1_fused_ax2_fused_1]), ph_0[ax0_ax1_fused_ax2_fused_1]);
  }
}
