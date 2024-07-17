void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0, float* ph_3) {
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
        T_subtract[(((ax0 * 216) + (ax1 * 18)) + ax2)] = (ph_0[(((ax0 * 216) + (ax1 * 18)) + ax2)] - ph_3[(((ax0 * 216) + (ax1 * 18)) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3456; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 3456; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = cosf(ph_0[i0_i1_fused_i2_fused_1]);
  }
}

