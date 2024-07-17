void default_function_kernel(float* data, float* depth_to_space) {
  #pragma omp parallel for
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 504; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      depth_to_space[((i0_i1_fused_i2_fused * 10) + i3)] = data[(((((((i0_i1_fused_i2_fused / 42) * 490) + (((i0_i1_fused_i2_fused % 14) % 2) * 210)) + ((i3 % 2) * 105)) + (((i0_i1_fused_i2_fused % 42) / 14) * 35)) + (((i0_i1_fused_i2_fused % 14) / 2) * 5)) + (i3 / 2))];
    }
  }
}

