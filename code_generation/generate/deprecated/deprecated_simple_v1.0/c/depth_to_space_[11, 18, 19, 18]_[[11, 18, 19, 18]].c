void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 60192; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[(((((((i0_i1_fused_i2_fused_i3_fused / 5472) * 6156) + ((((i0_i1_fused_i2_fused_i3_fused % 1368) / 36) % 2) * 2736)) + (((i0_i1_fused_i2_fused_i3_fused % 36) % 2) * 1368)) + (((i0_i1_fused_i2_fused_i3_fused % 5472) / 1368) * 342)) + ((((i0_i1_fused_i2_fused_i3_fused % 1368) / 36) / 2) * 18)) + ((i0_i1_fused_i2_fused_i3_fused % 36) / 2))];
  }
}

