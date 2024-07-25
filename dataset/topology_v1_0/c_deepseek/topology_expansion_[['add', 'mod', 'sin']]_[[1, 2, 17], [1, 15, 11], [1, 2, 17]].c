void default_function_kernel(float* T_add, float* T_mod, float* compute, float* ph_0, float* ph_3) {
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      T_add[((ax1 * 17) + ax2)] = (ph_0[((ax1 * 17) + ax2)] + ph_3[((ax1 * 17) + ax2)]);
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 17; ++ax2_1) {
      T_mod[((ax1_1 * 17) + ax2_1)] = fmodf(ph_0[((ax1_1 * 17) + ax2_1)], ph_3[((ax1_1 * 17) + ax2_1)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 34; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
}

