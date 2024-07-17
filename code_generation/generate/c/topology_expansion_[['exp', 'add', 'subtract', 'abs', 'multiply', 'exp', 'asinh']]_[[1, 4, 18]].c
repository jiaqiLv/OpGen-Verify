void default_function_kernel(float* T_subtract, float* compute, float* compute_1, float* ph_0) {
  float compute_2[18];
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      compute_2[i2] = expf(ph_0[((ax1 * 18) + i2)]);
    }
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      T_subtract[((ax1 * 18) + ax2)] = compute_2[ax2];
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 18; ++i2_1) {
      compute[((i0_i1_fused * 18) + i2_1)] = expf((ph_0[((i0_i1_fused * 18) + i2_1)] * fabsf(ph_0[((i0_i1_fused * 18) + i2_1)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 72; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = asinhf((ph_0[i0_i1_fused_i2_fused] * fabsf(ph_0[i0_i1_fused_i2_fused])));
  }
}

