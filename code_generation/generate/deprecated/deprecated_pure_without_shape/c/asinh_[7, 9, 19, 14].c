void default_function_kernel(float* compute, float* data) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1197; ++i0_i1_fused_i2_fused) {
    for (int32_t i3_s = 0; i3_s < 14; ++i3_s) {
      compute[((i0_i1_fused_i2_fused * 14) + i3_s)] = asinhf(data[((i0_i1_fused_i2_fused * 14) + i3_s)]);
    }
  }
}

