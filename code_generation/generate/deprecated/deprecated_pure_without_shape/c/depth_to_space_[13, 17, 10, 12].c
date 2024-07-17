void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 24960; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[(((((((i0_i1_fused_i2_fused_i3_fused / 1920) * 2040) + ((((i0_i1_fused_i2_fused_i3_fused % 480) / 24) % 2) * 960)) + (((i0_i1_fused_i2_fused_i3_fused % 24) % 2) * 480)) + (((i0_i1_fused_i2_fused_i3_fused % 1920) / 480) * 120)) + ((((i0_i1_fused_i2_fused_i3_fused % 480) / 24) / 2) * 12)) + ((i0_i1_fused_i2_fused_i3_fused % 24) / 2))];
  }
}

