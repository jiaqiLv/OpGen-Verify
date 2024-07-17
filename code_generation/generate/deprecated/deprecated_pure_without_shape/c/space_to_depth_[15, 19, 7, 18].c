void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 143640; ++i0_i1_fused_i2_fused_i3_fused) {
    space_to_depth[i0_i1_fused_i2_fused_i3_fused] = data[(((((((i0_i1_fused_i2_fused_i3_fused / 9576) * 9576) + ((((i0_i1_fused_i2_fused_i3_fused % 9576) / 126) % 19) * 504)) + (((i0_i1_fused_i2_fused_i3_fused % 126) / 18) * 72)) + ((((i0_i1_fused_i2_fused_i3_fused % 9576) / 126) / 38) * 36)) + ((i0_i1_fused_i2_fused_i3_fused % 18) * 2)) + ((((i0_i1_fused_i2_fused_i3_fused % 9576) / 126) % 38) / 19))];
  }
}

