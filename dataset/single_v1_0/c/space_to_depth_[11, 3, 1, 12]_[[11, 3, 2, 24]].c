void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 1584; ++i0_i1_fused_i2_fused_i3_fused) {
    space_to_depth[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused / 144) * 144) + ((((i0_i1_fused_i2_fused_i3_fused % 144) / 12) % 3) * 48)) + ((((i0_i1_fused_i2_fused_i3_fused % 144) / 12) / 6) * 24)) + ((i0_i1_fused_i2_fused_i3_fused % 12) * 2)) + ((((i0_i1_fused_i2_fused_i3_fused % 144) / 12) % 6) / 3))];
  }
}

