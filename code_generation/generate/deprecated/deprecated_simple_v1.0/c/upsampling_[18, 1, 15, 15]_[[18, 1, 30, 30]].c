void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 64800; ++i0_i1_fused_i2_fused_i3_fused) {
    resize[i0_i1_fused_i2_fused_i3_fused] = data[((((i0_i1_fused_i2_fused_i3_fused / 3600) * 900) + ((((i0_i1_fused_i2_fused_i3_fused % 3600) / 60) / 2) * 30)) + ((i0_i1_fused_i2_fused_i3_fused % 60) / 2))];
  }
}
