void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 5760; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[(((((((i0_i1_fused_i2_fused_i3_fused / 480) * 480) + ((((i0_i1_fused_i2_fused_i3_fused % 120) / 30) % 2) * 240)) + (((i0_i1_fused_i2_fused_i3_fused % 30) % 2) * 120)) + (((i0_i1_fused_i2_fused_i3_fused % 480) / 120) * 30)) + ((((i0_i1_fused_i2_fused_i3_fused % 120) / 30) / 2) * 15)) + ((i0_i1_fused_i2_fused_i3_fused % 30) / 2))];
  }
}
