void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 560; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 7; ++i3) {
      compute[((i0_i1_fused_i2_fused * 7) + i3)] = logf(data[((i0_i1_fused_i2_fused * 7) + i3)]);
    }
  }
}

