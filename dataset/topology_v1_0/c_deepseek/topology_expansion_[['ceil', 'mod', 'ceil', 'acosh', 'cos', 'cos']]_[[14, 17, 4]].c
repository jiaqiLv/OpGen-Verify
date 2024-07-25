void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 238; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      compute[((i0_i1_fused * 4) + i2)] = ceilf(fmodf(ph_0[((i0_i1_fused * 4) + i2)], ceilf(ph_0[((i0_i1_fused * 4) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 952; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 952; ++i0_i1_fused_i2_fused_1) {
    compute_2[i0_i1_fused_i2_fused_1] = cosf(cosf(ph_0[i0_i1_fused_i2_fused_1]));
  }
}
