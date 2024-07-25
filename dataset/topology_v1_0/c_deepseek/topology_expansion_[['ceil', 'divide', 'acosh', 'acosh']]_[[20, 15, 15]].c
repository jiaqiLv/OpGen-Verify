void default_function_kernel(float* compute, float* compute_1, float* ph_0) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 300; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      compute[((i0_i1_fused * 15) + i2)] = acoshf((ph_0[((i0_i1_fused * 15) + i2)] / ceilf(ph_0[((i0_i1_fused * 15) + i2)])));
    }
  }
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4500; ++i0_i1_fused_i2_fused) {
    compute_1[i0_i1_fused_i2_fused] = acoshf(ph_0[i0_i1_fused_i2_fused]);
  }
}
