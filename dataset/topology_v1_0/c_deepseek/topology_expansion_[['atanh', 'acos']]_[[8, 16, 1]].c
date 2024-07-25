void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 128; ++i0_i1_fused) {
    compute[i0_i1_fused] = atanhf(ph_0[i0_i1_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 8; ++i0) {
    for (int32_t i1 = 0; i1 < 16; ++i1) {
      compute_1[((i0 * 16) + i1)] = acosf(ph_0[((i0 * 16) + i1)]);
    }
  }
}
