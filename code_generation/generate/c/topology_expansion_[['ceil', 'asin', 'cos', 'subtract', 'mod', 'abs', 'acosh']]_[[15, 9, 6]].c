void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 810; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = ceilf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 135; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      compute_1[((i0_i1_fused * 6) + i2)] = fabsf(fmodf(ph_0[((i0_i1_fused * 6) + i2)], (ph_0[((i0_i1_fused * 6) + i2)] - cosf(asinf(ph_0[((i0_i1_fused * 6) + i2)])))));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 810; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = acoshf(fmodf(ph_0[i0_i1_fused_i2_fused_1], (ph_0[i0_i1_fused_i2_fused_1] - cosf(asinf(ph_0[i0_i1_fused_i2_fused_1])))));
  }
}
