void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 1568; ++i0_i1_fused_i2_fused_i3_fused) {
    space_to_depth[i0_i1_fused_i2_fused_i3_fused] = data[(((((((i0_i1_fused_i2_fused_i3_fused / 224) * 224) + ((((i0_i1_fused_i2_fused_i3_fused % 224) / 28) % 2) * 112)) + (((i0_i1_fused_i2_fused_i3_fused % 28) / 7) * 28)) + ((((i0_i1_fused_i2_fused_i3_fused % 224) / 28) / 4) * 14)) + ((i0_i1_fused_i2_fused_i3_fused % 7) * 2)) + ((((i0_i1_fused_i2_fused_i3_fused % 224) / 28) % 4) / 2))];
  }
}
