void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 9240; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 36; ++i3) {
      resize[((i0_i1_fused_i2_fused * 36) + i3)] = data[((((i0_i1_fused_i2_fused / 56) * 504) + (((i0_i1_fused_i2_fused % 56) / 2) * 18)) + (i3 / 2))];
    }
  }
}
