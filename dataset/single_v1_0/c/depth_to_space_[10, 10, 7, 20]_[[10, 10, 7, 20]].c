void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 280; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 40; ++i3) {
      depth_to_space[((i0_i1_fused_i2_fused * 40) + i3)] = data[(((((((i0_i1_fused_i2_fused / 28) * 1400) + (((i0_i1_fused_i2_fused % 14) % 2) * 560)) + ((i3 % 2) * 280)) + (((i0_i1_fused_i2_fused % 28) / 14) * 140)) + (((i0_i1_fused_i2_fused % 14) / 2) * 20)) + (i3 / 2))];
    }
  }
}

