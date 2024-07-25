void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  float compute_2[550];
  #pragma omp parallel for
  for (int32_t ax0 = 0; ax0 < 5; ++ax0) {
    float compute_3[110];
    for (int32_t i1 = 0; i1 < 11; ++i1) {
      for (int32_t i2_s = 0; i2_s < 10; ++i2_s) {
        compute_3[((i1 * 10) + i2_s)] = expf((ph_0[(((ax0 * 110) + (i1 * 10)) + i2_s)] * atanf(ph_0[(((ax0 * 110) + (i1 * 10)) + i2_s)])));
      }
    }
    for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
      for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
        T_subtract[(((ax0 * 110) + (ax1 * 10)) + ax2)] = (ph_0[(((ax0 * 110) + (ax1 * 10)) + ax2)] - compute_3[((ax1 * 10) + ax2)]);
      }
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 550; ++i0_i1_fused_i2_fused) {
    compute_2[i0_i1_fused_i2_fused] = expf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 550; ++i0_i1_fused_i2_fused_1) {
    compute[i0_i1_fused_i2_fused_1] = asinf(compute_2[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 55; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      compute_1[((i0_i1_fused * 10) + i2)] = asinhf(compute_2[((i0_i1_fused * 10) + i2)]);
    }
  }
}

