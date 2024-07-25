void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* compute_3, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 12; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = sinf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 6; ++i0) {
    float compute_4[1];
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      compute_4[0] = expf(ph_0[((i0 * 2) + i2)]);
      compute_1[((i0 * 2) + i2)] = acoshf(compute_4[0]);
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      compute_2[((i0_i1_fused * 2) + i2_1)] = expf(fmodf(ph_0[((i0_i1_fused * 2) + i2_1)], acoshf(ph_0[((i0_i1_fused * 2) + i2_1)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 12; ++i0_i1_fused_i2_fused_1) {
    compute_3[i0_i1_fused_i2_fused_1] = atanhf(fmodf(ph_0[i0_i1_fused_i2_fused_1], acoshf(ph_0[i0_i1_fused_i2_fused_1])));
  }
}
