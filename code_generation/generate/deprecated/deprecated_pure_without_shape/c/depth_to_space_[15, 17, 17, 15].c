void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 61200; ++i0_i1_fused_i2_fused_i3_fused) {
    depth_to_space[i0_i1_fused_i2_fused_i3_fused] = data[(((((((i0_i1_fused_i2_fused_i3_fused / 4080) * 4335) + ((((i0_i1_fused_i2_fused_i3_fused % 1020) / 30) % 2) * 2040)) + (((i0_i1_fused_i2_fused_i3_fused % 30) % 2) * 1020)) + (((i0_i1_fused_i2_fused_i3_fused % 4080) / 1020) * 255)) + ((((i0_i1_fused_i2_fused_i3_fused % 1020) / 30) / 2) * 15)) + ((i0_i1_fused_i2_fused_i3_fused % 30) / 2))];
  }
}

