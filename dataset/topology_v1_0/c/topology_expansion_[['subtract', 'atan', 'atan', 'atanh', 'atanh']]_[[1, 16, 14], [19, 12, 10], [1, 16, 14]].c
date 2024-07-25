void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* compute_2, float* ph_0, float* ph_3) {
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      T_subtract[((ax1 * 14) + ax2)] = (ph_0[((ax1 * 14) + ax2)] - ph_3[((ax1 * 14) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 224; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = atanf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 224; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = atanhf(atanf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 224; ++i0_i1_fused_i2_fused_2) {
    compute_2[i0_i1_fused_i2_fused_2] = atanhf(atanf(ph_0[i0_i1_fused_i2_fused_2]));
  }
}
