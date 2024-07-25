void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* compute_4, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 162; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      compute[((i0_i1_fused * 14) + i2)] = sinf(ph_0[((i0_i1_fused * 14) + i2)]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2268; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = expf(asinf(ph_0[i0_i1_fused_i2_fused]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 2268; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = asinhf(ph_0[i0_i1_fused_i2_fused_1]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_2 = 0; i0_i1_fused_i2_fused_2 < 2268; ++i0_i1_fused_i2_fused_2) {
    compute_3[i0_i1_fused_i2_fused_2] = atanf(acosf(ph_0[i0_i1_fused_i2_fused_2]));
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_3 = 0; i0_i1_fused_i2_fused_3 < 2268; ++i0_i1_fused_i2_fused_3) {
    compute_4[i0_i1_fused_i2_fused_3] = fabsf(acosf(ph_0[i0_i1_fused_i2_fused_3]));
  }
}
