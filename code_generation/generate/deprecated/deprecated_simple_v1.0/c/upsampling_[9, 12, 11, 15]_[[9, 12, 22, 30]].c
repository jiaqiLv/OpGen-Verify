void default_function_kernel(float* data, float* resize) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 285120; ++i0_i1_fused_i2_fused_i3_fused) {
    resize[i0_i1_fused_i2_fused_i3_fused] = data[((((i0_i1_fused_i2_fused_i3_fused / 2640) * 660) + ((((i0_i1_fused_i2_fused_i3_fused % 2640) / 60) / 2) * 30)) + ((i0_i1_fused_i2_fused_i3_fused % 60) / 2))];
  }
}

