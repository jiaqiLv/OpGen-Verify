void default_function_kernel(float* T_mod, float* compute, float* compute_1, float* ph_0) {
  float compute_2[17];
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 272; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      compute_2[i2] = expf(ph_0[((ax1 * 17) + i2)]);
    }
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      T_mod[((ax1 * 17) + ax2)] = fmodf(compute_2[ax2], ph_0[((ax1 * 17) + ax2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 17; ++i2_1) {
      compute_1[((i0_i1_fused * 17) + i2_1)] = expf(ph_0[((i0_i1_fused * 17) + i2_1)]);
    }
  }
}

