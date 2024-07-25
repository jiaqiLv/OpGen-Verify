void default_function_kernel(float* compute, float* compute_1, float* compute_2, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1900; ++i0_i1_fused_i2_fused) {
    compute[i0_i1_fused_i2_fused] = fabsf(ph_0[i0_i1_fused_i2_fused]);
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 100; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 19; ++i2) {
      compute_1[((i0_i1_fused * 19) + i2)] = fabsf(asinhf(ph_0[((i0_i1_fused * 19) + i2)]));
    }
  }
  #pragma omp parallel for
  for (int32_t i0 = 0; i0 < 10; ++i0) {
    for (int32_t i1 = 0; i1 < 10; ++i1) {
      for (int32_t i2_1 = 0; i2_1 < 19; ++i2_1) {
        compute_2[(((i0 * 190) + (i1 * 19)) + i2_1)] = cosf((ph_0[(((i0 * 190) + (i1 * 19)) + i2_1)] / sinf(ph_0[(((i0 * 190) + (i1 * 19)) + i2_1)])));
      }
    }
  }
}
