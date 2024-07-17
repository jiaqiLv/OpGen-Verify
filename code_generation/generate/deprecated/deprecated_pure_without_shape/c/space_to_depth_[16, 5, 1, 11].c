void default_function_kernel(float* data, float* space_to_depth) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 3520; ++i0_i1_fused_i2_fused_i3_fused) {
    space_to_depth[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused / 220) * 220) + ((((i0_i1_fused_i2_fused_i3_fused % 220) / 11) % 5) * 44)) + ((((i0_i1_fused_i2_fused_i3_fused % 220) / 11) / 10) * 22)) + ((i0_i1_fused_i2_fused_i3_fused % 11) * 2)) + ((((i0_i1_fused_i2_fused_i3_fused % 220) / 11) % 10) / 5))];
  }
}

