void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 3648; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[((((((i0_i1_fused_i2_fused_i3_fused / 228) * 228) + (((i0_i1_fused_i2_fused_i3_fused % 76) / 38) * 114)) + (((i0_i1_fused_i2_fused_i3_fused % 38) % 2) * 57)) + (((i0_i1_fused_i2_fused_i3_fused % 228) / 76) * 19)) + ((i0_i1_fused_i2_fused_i3_fused % 38) / 2))];
  }
}

