void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 224; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = cosf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 224; ++i0_i1_fused_i2_fused_1) {
    compute_1[i0_i1_fused_i2_fused_1] = acoshf(acoshf(ph_0[i0_i1_fused_i2_fused_1]));
  }
  for (int32_t i1 = 0; i1 < 14; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      compute_2[((i1 * 16) + i2)] = atanf(ph_0[((i1 * 16) + i2)]);
    }
  }
}

